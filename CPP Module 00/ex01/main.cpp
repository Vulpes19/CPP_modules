/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:28:39 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/15 19:48:13 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	check_ifEmpty(Contact contact)
{
	if (contact.get_firstName().empty()
		|| contact.get_lasttName().empty()
		|| contact.get_nickname().empty()
		|| contact.get_number().empty()
		|| contact.get_darkestSecret().empty())
		return (1);
	else
		return (0);
}

int	main(void)
{
	std::string    input;
	int index = 0;
	PhoneBook   phoneBook;
	Contact     contact;

	while (true)
	{
		std::cin >> input;
		if (input == "ADD")
		{
			if (index >= 8)
				index = 0;
			std::cout << index << std::endl;
			std::string data;
			std::cout << "Please enter the displayed informations" << std::endl;
			std::cout << "First name: ";
			std::cin >> data;
			contact.set_firstName(data);
			std::cout << "Last name: ";
			std::cin >> data;
			contact.set_lastName(data);
			std::cout << "Nickname: ";
			std::cin >> data;
			contact.set_nickname(data);
			std::cout << "Phone number: ";
			std::cin >> data;
			contact.set_number(data);
			std::cout << "Darkest secret: ";
			std::cin >> data;
			contact.set_darkestSecret(data);
			if (!check_ifEmpty(contact))
				phoneBook.addContact(contact, index);
			index++;
		}
		else if (input == "SEARCH")
		{
			if (index > 0)
			{
				int i;
				phoneBook.printTable();
				std::cout << "Please enter an index: ";
				std::cin >> i;
				if (i >= 0 && i < 8)
					phoneBook.searchContact(i);
				else
					std::cerr << "The index is out of range" << std::endl;
			}
			else
				std::cout << "The list is empty :(" << std::endl;
		}
		else if (input == "EXIT")
			break ;
		else
			std::cerr << "only accepts <ADD> <SEARCH> <EXIT>" << std::endl;
	}
	return (0);
}