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
	while (true)
	{
		std::cout << RED << "accepts <ADD> <SEARCH> <EXIT>" << RESET << std::endl;
		// std::cin >> input;
		if (!std::getline(std::cin, input))
			break ;
		if (input == "ADD")
		{
			if (phoneBook.getIndex() >= 8)
				phoneBook.setIndex(0);
			phoneBook.inputContact();
		}
		else if (input == "SEARCH")
		{
			if (phoneBook.getIndex() > 0)
			{
				std::string in;
				char		ptr[in.length()];
				char		*ptrEnd;
				long int	nbr = -1;
			
				phoneBook.printTable();
				std::cout << "Please enter an index: ";
				if (!std::getline(std::cin, in))
					break ;
				for (unsigned int i = 0; i < in.length(); i++)
				{
					ptr[i] = in[i];
				}
				nbr = strtol(ptr, &ptrEnd, 10);
				if (nbr >= 0 && nbr < phoneBook.getIndex() && *ptrEnd == '\0')
					phoneBook.searchContact(nbr);
				else
					std::cerr << "The index is out of range" << std::endl;
			}
			else
				std::cout << "The list is empty :(" << std::endl;
		}
		else if (input == "EXIT")
			break ;
		else
			continue ;
	}
	return (0);
}