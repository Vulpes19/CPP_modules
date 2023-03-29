/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:59:59 by abaioumy          #+#    #+#             */
/*   Updated: 2023/03/28 13:48:08 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template < typename Container >

void	printNumbers( const Container &before, const Container &after )
{
	std::cout << "Before:  ";
	for ( size_t i = 0; i < before.size(); i++ )
		std::cout << before[i] << " ";
	std::cout << std::endl;
	std::cout << "After:   ";
	for ( size_t i = 0; i < after.size(); i++ )
		std::cout << after[i] << " ";
	std::cout << std::endl;
}

int	main( int ac, char **av )
{
	if ( ac != 2 )
	{
		std::cerr << "Error: [executable] [integer sequence]\n";
		return (1);
	}
	try
	{
		PmergeMe< std::vector<int> > pm1(av[1]);
		PmergeMe< std::deque<int> > pm2(av[1]);
		
		printNumbers( pm1.getContainers().first, pm1.getContainers().second);
		pm1.printResults( vector );
		pm2.printResults( deque );
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}