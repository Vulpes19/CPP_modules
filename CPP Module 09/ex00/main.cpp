/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:39:02 by abaioumy          #+#    #+#             */
/*   Updated: 2023/03/28 12:47:17 by abaioumy         ###   ########.fr       */
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
	try
	{
		BitcoinExchange	btc;
		btc.parseInputFile(av[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	// std::ifstream  inputFile;
	// std::string line;
	// std::string tmpLine = "";
	// double		amount = 0.0;
	// size_t pos = 0;
	// inputFile.open(av[1]);
	// if ( !inputFile )
	// {
	// 	std::cerr << "connot open input file, please enter a valid file\n";
	// 	return (EXIT_FAILURE);
	// }
	// if ( !std::getline( inputFile, line ) )
	// {
	// 	std::cerr << "file is empty\n";
	// 	return (EXIT_FAILURE);
	// }
	// while ( inputFile )
	// {
	// 	pos = 0;
	// 	tmpLine = "";
	// 	amount = 0;
	// 	const char	*ptr_line;
	// 	if ( !std::getline( inputFile, line ) )
	// 		break ;
	// 	if ( line == "date | value" )
	// 		continue ;
	// 	if ( line.length() >= 14)
	// 		std::replace( line.begin() + 13, line.end(), ',', '.');
	// 	if ( std::count( line.begin(), line.end(), '.') > 1 )
	// 	{
	// 		std::cout << "Error: bad input => " << line << std::endl;
	// 		continue ;
	// 	}
	// 	std::
	// 	if ( line.length() >= 12 )
	// 	{	
	// 		tmpLine = line.substr(12, line.length());
	// 		if ( !tmpLine.empty() )
	// 		{
	// 			ptr_line = tmpLine.c_str();
	// 			amount = atof(ptr_line);
	// 		}
	// 	}
	// 	else
	// 	{
	// 		std::cout << "Error: bad input => " << line << std::endl;
	// 		continue ;
	// 	}
	// 	btc.printTransactions( line.substr(0, 10), amount );
	// }
	// inputFile.close();
	return (0);
}