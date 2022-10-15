/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:57:39 by codespace         #+#    #+#             */
/*   Updated: 2022/10/15 19:33:10 by codespace        ###   ########.fr       */
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

std::string	PhoneBook::fixLength(std::string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 10);
		str[str.length() - 1] = '.';
		return (str);
	}
	else
		return (str);
}

void    PhoneBook::printTable(void)
{
	std::cout << "\033[0;36m";
	std::cout << std::setw(1) << std::right << "|";
	std::cout << std::setw(10) << std::right << "Index";
	std::cout << std::setw(1) << std::right << "|";
	std::cout << std::setw(10) << std::right << "First name";
	std::cout << std::setw(1) << std::right << "|";
	std::cout << std::setw(10) << std::right << "Last name";
	std::cout << std::setw(1) << std::right << "|";
	std::cout << std::setw(10) << std::right << "Nickname";
	std::cout << std::setw(1) << std::right << "|";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
	{   
		std::cout << std::setw(1) << std::right << "|";
		std::cout << "\001\e[0m\002";
		std::cout << std::setw(10) << std::right << i;
		std::cout << "\033[0;36m";
		std::cout << std::setw(1) << std::right << "|";
		std::cout << "\001\e[0m\002";
		std::cout << std::setw(10) << std::right << fixLength(contacts[i].get_firstName());
		std::cout << "\033[0;36m";
		std::cout << std::setw(1) << std::right << "|";
		std::cout << "\001\e[0m\002";
		std::cout << std::setw(10) << std::right << fixLength(contacts[i].get_lasttName());
		std::cout << "\033[0;36m";
		std::cout << std::setw(1) << std::right << "|";
		std::cout << "\001\e[0m\002";
		std::cout << std::setw(10) << std::right << fixLength(contacts[i].get_nickname());
		std::cout << "\033[0;36m";
		std::cout << std::setw(1) << std::right << "|";
		std::cout << std::endl;
	}
	std::cout << "\001\e[0m\002";
}

void	PhoneBook::searchContact(int index)
{
	std::cout << "First name: " << contacts[index].get_firstName() << std::endl;
	std::cout << "Last name: " << contacts[index].get_lasttName() << std::endl;
	std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
	std::cout << "Phone number: " << contacts[index].get_number() << std::endl;
	std::cout << "Darkest secret: " << contacts[index].get_darkestSecret() << std::endl;
}