/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:39:02 by abaioumy          #+#    #+#             */
/*   Updated: 2023/03/29 11:44:37 by abaioumy         ###   ########.fr       */
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
	return (0);
}