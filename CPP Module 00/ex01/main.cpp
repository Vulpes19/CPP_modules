/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:28:39 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/15 16:39:45 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
    std::string    input;
    int index = 0;
    PhoneBook   phoneBook;
    Contact contact;

	while (true)
    {
        std::cin >> input;
        if (input == "ADD")
        {
            std::string data;
            std::cout << "adding a contact" << std::endl;
            std::cout << "First name: ";
            std::cin >> data;
            contact.set_firstName(data);
            std::cout << "Last name: ";
            std::cin >> data;
            contact.set_lastName(data);
            std::cout << "Nickname: ";
            std::cin >> data;
            contact.set_nickname(data);
            int nbr;
            std::cout << "Phone number: ";
            std::cin >> nbr;
            contact.set_number(nbr);
            std::cout << "Darkest secret: ";
            std::cin >> data;
            contact.set_darkestSecret(data);
            phoneBook.addContact(contact, index);
            index++;
        }
        else if (input == "SEARCH")
        {
            if (index > 0)
                phoneBook.printTable();
            // phoneBook.searchContact(i);
        }
        else if (input == "EXIT")
            break ;
        else
            std::cout << "only accepts <ADD> <SEARCH> <EXIT>" << std::endl;
    }
}