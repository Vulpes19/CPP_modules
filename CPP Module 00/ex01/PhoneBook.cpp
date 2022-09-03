/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:57:09 by abaioumy          #+#    #+#             */
/*   Updated: 2022/09/03 18:17:16 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    std::cout << "phonebook is created" << std::endl;
    return ;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "phonebook is destroyed" << std::endl;
    return ;
}

Contact PhoneBook::get_contact(int index)
{
    return (contacts[index]);
}

void    PhoneBook::ft_PrintTable(Contact contact)
{
    std::cout << "|";
    std::cout << "first name" << std::endl;
    std::cout << contact.gset_FirstName("none");
}

void    PhoneBook::ft_add(int index)
{
    std::string input;
    int         nbr;
    Contact     contact;

    contact = get_contact(index);
    std::cout << "first name: " << std::endl;
    std::cin >> input;
    contact.gset_FirstName(input);
    std::cout << "last name: " << std::endl;
    std::cin >> input;
    contact.gset_LastName(input);
    std::cout << "nickname: " << std::endl;
    std::cin >> input;
    contact.gset_nickname(input);
    std::cout << "phone number: " << std::endl;
    std::cin >> nbr;
    contact.gset_PhoneNbr(nbr);
    std::cout << "darkest secret: " << std::endl;
    std::cin >> input;
    contact.gset_DarkestSecret(input);   
}

void    PhoneBook::ft_search(void)
{
    Contact contacts;

    for (int i = 0; i < 55; i++)
        std::cout << "-";
    std::cout << std::endl;
    for (int i = 0; i < 8; i++)
    {
        ft_PrintTable(contacts[i]);
    }
}