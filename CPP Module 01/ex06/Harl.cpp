/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>        	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:13:23 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/21 10:20:56 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::complain( std::string level)
{
	int index = -1;

	std::string functions[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (functions[i] == level)
		{
			index = i;
			break ;
		}
	}
	switch (index)
	{
	case 0:
		debug();
	case 1:
		info();
	case 2:
		warning();
	case 3:
		error();
	default:
		break;
	}
}
void    Harl::debug( void )
{
	std::cout << "DEBUG" << std::endl;

	std::cout << "I love having extra bacon for "
			<< "my 7XL-double-cheese-triple-pickle-"
			<< "special- ketchup burger. I really do!" 
			<< std::endl;
}

void    Harl::info( void )
{
	std::cout << "INFO" << std::endl;

	std::cout << "I cannot believe adding extra bacon costs more money."
		<< " You didn’t put enough bacon in my burger! If you did, "
		<< "I wouldn’t be asking for more!"
		<< std::endl;
}

void    Harl::warning( void )
{
	std::cout << "WARNING" << std::endl;

	std::cout << "I think I deserve to have some extra bacon for free."
		<< " I’ve been coming for years whereas you started"
		<< " working here since last month."
		<< std::endl;
}

void    Harl::error( void )
{
	std::cout << "ERROR" << std::endl;

	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}