/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:57:39 by codespace         #+#    #+#             */
/*   Updated: 2022/10/15 17:48:18 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
	for (int i = 0; i < 8; i++)
	{
		contacts[i].set_firstName("");
		contacts[i].set_lastName("");
		contacts[i].set_nickname("");
		contacts[i].set_darkestSecret("");
		contacts[i].set_number("");
	}
}

void    PhoneBook::printTable(void)
{
	std::cout << "\033[0;36m";
	std::cout << std::setw(1) << std::left << "|";
	std::cout << std::setw(10) << std::left << "Index";
	std::cout << std::setw(1) << std::left << "|";
	std::cout << std::setw(10) << std::left << "First name";
	std::cout << std::setw(1) << std::left << "|";
	std::cout << std::setw(10) << std::left << "Last name";
	std::cout << std::setw(1) << std::left << "|";
	std::cout << std::setw(10) << std::left << "Nickname";
	std::cout << std::setw(1) << std::left << "|";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
	{   
		std::cout << std::setw(1) << std::left << "|";
		std::cout << "\001\e[0m\002";
		std::cout << std::setw(10) << std::left << i;
		std::cout << "\033[0;36m";
		std::cout << std::setw(1) << std::left << "|";
		std::cout << "\001\e[0m\002";
		std::cout << std::setw(10) << std::left << contacts[i].get_firstName();
		std::cout << "\033[0;36m";
		std::cout << std::setw(1) << std::left << "|";
		std::cout << "\001\e[0m\002";
		std::cout << std::setw(10) << std::left << contacts[i].get_lasttName();
		std::cout << "\033[0;36m";
		std::cout << std::setw(1) << std::left << "|";
		std::cout << "\001\e[0m\002";
		std::cout << std::setw(10) << std::left << contacts[i].get_nickname();
		std::cout << "\033[0;36m";
		std::cout << std::setw(1) << std::left << "|";
		std::cout << std::endl;
	}
	std::cout << "\001\e[0m\002";
}