/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>        	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:57:39 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/15 19:33:10 by abaioumy         ###   ########.fr       */
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
	std::cout << CYAN;
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
		std::cout << RESET;
		std::cout << std::setw(10) << std::right << i;
		std::cout << CYAN;
		std::cout << std::setw(1) << std::right << "|";
		std::cout << RESET;
		std::cout << std::setw(10) << std::right << fixLength(contacts[i].get_firstName());
		std::cout << CYAN;
		std::cout << std::setw(1) << std::right << "|";
		std::cout << RESET;
		std::cout << std::setw(10) << std::right << fixLength(contacts[i].get_lasttName());
		std::cout << CYAN;
		std::cout << std::setw(1) << std::right << "|";
		std::cout << RESET;
		std::cout << std::setw(10) << std::right << fixLength(contacts[i].get_nickname());
		std::cout << CYAN;
		std::cout << std::setw(1) << std::right << "|";
		std::cout << std::endl;
	}
	std::cout << RESET;
}

void	PhoneBook::searchContact(int index)
{
	std::cout << YELLOW << "First name: " << RESET << contacts[index].get_firstName() << std::endl;
	std::cout << YELLOW << "Last name: " << RESET << contacts[index].get_lasttName() << std::endl;
	std::cout << YELLOW << "Nickname: " << RESET << contacts[index].get_nickname() << std::endl;
	std::cout << YELLOW << "Phone number: " << RESET << contacts[index].get_number() << std::endl;
	std::cout << YELLOW << "Darkest secret: " << RESET << contacts[index].get_darkestSecret() << std::endl;
}