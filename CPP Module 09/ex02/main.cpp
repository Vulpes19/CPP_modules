/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:59:59 by codespace         #+#    #+#             */
/*   Updated: 2023/03/23 12:25:54 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main( int ac, char **av )
{
	if ( ac != 2 )
	{
		std::cerr << "Error: [executable] [integer sequence]\n";
		return (1);
	}
	PmergeMe< std::vector<int> > pm1(av[1]);
	PmergeMe< std::deque<int> > pm2(av[1]);
	
	return (0);
}