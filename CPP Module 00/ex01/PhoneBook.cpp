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

PhoneBook::PhoneBook( void )
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

std::string	PhoneBook::fixLength( std::string str )
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

void	PhoneBook::addContact( Contact contact )
{
	contacts[index] = contact;
}

void    PhoneBook::printTable( void )
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
		if ( check_ifEmpty( contacts[i] ) )
			break ;
		std::cout << std::setw(1) << std::right << "|";
		std::cout << RESET;
		std::cout << std::setw(10) << std::right << i;
		std::cout << CYAN;
		std::cout << std::setw(1) << std::right << "|";
		std::cout << RESET;
		std::cout << std::setw(10) << std::right << fixLength( contacts[i].get_firstName() );
		std::cout << CYAN;
		std::cout << std::setw(1) << std::right << "|";
		std::cout << RESET;
		std::cout << std::setw(10) << std::right << fixLength(contacts[i].get_lastName());
		std::cout << CYAN;
		std::cout << std::setw(1) << std::right << "|";
		std::cout << RESET;
		std::cout << std::setw(10) << std::right << fixLength( contacts[i].get_nickname() );
		std::cout << CYAN;
		std::cout << std::setw(1) << std::right << "|";
		std::cout << std::endl;
	}
	std::cout << RESET;
}

// void	PhoneBook::startSearch( void )
// {
// 	std::string in;
// 	char		ptr[in.length()];
// 	char		*ptrEnd;
// 	long int	nbr = 9;
// 	if (index > 0)
// 	{
// 		printTable();
// 		std::cout << "Please enter an index: ";
// 		if (!std::getline(std::cin, in))
// 			exit(1) ;
// 		while ( in.length() == 0 )
// 		{
// 			std::cerr << "please enter a number: ";
// 			if (!std::getline(std::cin, in))
// 				exit(1) ;
// 		}
// 		for (unsigned int i = 0; i < in.length(); i++)
// 		{
// 			ptr[i] = in[i];
// 		}
// 		nbr = strtol(ptr, &ptrEnd, 10);
// 		// std::cout << nbr << std::endl;
// 		// std::cout << index << std::endl;
// 		if (nbr >= 0 && nbr < getIndex() && *ptrEnd == '\0')
// 			searchContact(nbr);
// 		else
// 			std::cerr << "Please enter an index in range" << std::endl;
// 	}
// 	else
// 		std::cout << "The list is empty :(" << std::endl;
// }

void	PhoneBook::searchContact( int index )
{
	std::cout << YELLOW << "First name: " << RESET << contacts[index].get_firstName() << std::endl;
	std::cout << YELLOW << "Last name: " << RESET << contacts[index].get_lastName() << std::endl;
	std::cout << YELLOW << "Nickname: " << RESET << contacts[index].get_nickname() << std::endl;
	std::cout << YELLOW << "Phone number: " << RESET << contacts[index].get_number() << std::endl;
	std::cout << YELLOW << "Darkest secret: " << RESET << contacts[index].get_darkestSecret() << std::endl;
}

void	PhoneBook::inputContact( void )
{
	Contact contact;

	std::string data;
	std::cout << "Please enter the displayed informations" << std::endl;
	std::cout << "First name: ";
	if (!std::getline(std::cin, data))
			exit(1) ;
	while ( data.length() == 0 )
	{
		std::cout << "Please enter a name: ";
		if (!std::getline(std::cin, data))
			exit(1) ;
	}
	contact.set_firstName(data);
	std::cout << "Last name: ";
	if (!std::getline(std::cin, data))
			exit(1) ;
	while ( data.length() == 0 )
	{
		std::cout << "Please enter a Last name: ";
		if (!std::getline(std::cin, data))
			exit(1) ;
	}
	contact.set_lastName(data);
	std::cout << "Nickname: ";
	if (!std::getline(std::cin, data))
			exit(1) ;
	while ( data.length() == 0 )
	{
		std::cout << "Please enter a nickname: ";
		if (!std::getline(std::cin, data))
			exit(1) ;
	}
	contact.set_nickname(data);
	std::cout << "Phone number: ";
	if (!std::getline(std::cin, data))
			exit(1) ;
	while ( data.length() == 0 )
	{
		std::cout << "Please enter a number: ";
		if (!std::getline(std::cin, data))
			exit(1) ;
	}
	contact.set_number(data);
	std::cout << "Darkest secret: ";
	if (!std::getline(std::cin, data))
			exit(1) ;
	while ( data.length() == 0 )
	{
		std::cout << "Please enter a darkest secret: ";
		if (!std::getline(std::cin, data))
			exit(1) ;
	}
	contact.set_darkestSecret(data);
	if (!check_ifEmpty(contact))
	{
		addContact(contact);
		index++;
	}
}

int	PhoneBook::check_ifEmpty(Contact contact)
{
	if (contact.get_firstName().empty()
		|| contact.get_lastName().empty()
		|| contact.get_nickname().empty()
		|| contact.get_number().empty()
		|| contact.get_darkestSecret().empty())
		return (1);
	else
		return (0);
}

void	PhoneBook::setIndex( int in )
{
	index = in;
}

int		PhoneBook::getIndex( void )
{
	return (index);
}
