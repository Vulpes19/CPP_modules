/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>        	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:28:39 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/15 19:48:13 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	std::string    input;
	PhoneBook   phoneBook;

	phoneBook.setIndex(0);
	std::cout << RED << "accepts <ADD> <SEARCH> <EXIT>" << RESET << std::endl;
	while (std::getline(std::cin, input))
	{
		if (input == "ADD")
		{
			if (phoneBook.getIndex() >= 8)
				phoneBook.setIndex(0);
			phoneBook.inputContact();
		}
		else if (input == "SEARCH")
		{
			std::string in;
			char		ptr[in.length()];
			char		*ptrEnd;
			long int	nbr = 9;
			if (phoneBook.getIndex() > 0)
			{
				phoneBook.printTable();
				std::cout << "Please enter an index: ";
				if (!std::getline(std::cin, in))
					exit(1) ;
				while ( in.length() == 0 )
				{
					std::cerr << "please enter a number: ";
					if (!std::getline(std::cin, in))
						exit(1) ;
				}
				for (unsigned int i = 0; i < in.length(); i++)
				{
					ptr[i] = in[i];
				}
				nbr = strtol(ptr, &ptrEnd, 10);
				if (nbr >= 0 && nbr < phoneBook.getIndex() && *ptrEnd == '\0')
					phoneBook.searchContact(nbr);
				else
					std::cerr << "Please enter an index in range" << std::endl;
			}
			else
				std::cout << "The list is empty :(" << std::endl;
		}
		else if (input == "EXIT")
			break ;
		else
		{
			std::cout << RED << "accepts <ADD> <SEARCH> <EXIT>" << RESET << std::endl;
			continue ;
		}
	}
	return (0);
}