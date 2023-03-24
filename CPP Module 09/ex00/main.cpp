/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:39:02 by codespace         #+#    #+#             */
/*   Updated: 2023/03/24 13:36:29 by abaioumy         ###   ########.fr       */
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
	double		amount = 0.0;
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
		amount = 0;
		const char	*ptr_line;
		if ( !std::getline( inputFile, line ) )
			break ;
		if ( line.length() >= 12 )
		{	
			tmpLine = line.substr(12, line.length());
			if ( !tmpLine.empty() )
			{
				ptr_line = tmpLine.c_str();
				amount = atof(ptr_line);
			}
		}
		else
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue ;
		}
		btc.printTransactions( line.substr(0, 10), amount );
	}
	inputFile.close();
	return (0);
}