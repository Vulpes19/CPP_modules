/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:39:02 by codespace         #+#    #+#             */
/*   Updated: 2023/03/22 16:44:35 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>

int	main( int ac, char **av )
{
	if ( ac != 2 )
	{
		std::cerr << "Error: [btc] [input_file]\n";
		return (EXIT_FAILURE);
	}
	std::ifstream  inputFile;
	BitcoinExchange	btc;
	std::string line;
	std::string tmpLine = "";
	inputFile.open(av[1]);
	if ( !inputFile )
	{
		std::cerr << "connot open input file, please enter a valid file\n";
		return (EXIT_FAILURE);
	}
	if ( !std::getline( inputFile, line ) )
	{
		std::cerr << "file is empty\n";
		return (EXIT_FAILURE);
	}
	if ( line != "date | value" )
	{
		std::cerr << "wrong file format\n";
		return (EXIT_FAILURE);
	}
	while ( inputFile )
	{
		tmpLine = "";
		const char	*ptr_line;
		double	amount;
		if ( !std::getline( inputFile, line ) )
			break ;
		if ( line.length() >= 12 )
			tmpLine = line.substr(12, line.length());
		if ( !tmpLine.empty() )
		{
			ptr_line = tmpLine.c_str();
			amount = atof(ptr_line);
		}
		else
			std::cout << "Error: bad input => " << line.substr(0, 10) << std::endl;
		btc.printTransactions( line.substr(0, 10), amount );
	}
	inputFile.close();
	return (0);
}