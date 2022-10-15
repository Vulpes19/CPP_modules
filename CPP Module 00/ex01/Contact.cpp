/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:42:34 by codespace         #+#    #+#             */
/*   Updated: 2022/10/15 17:01:07 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

void	Contact::set_firstName(std::string str)
{
	if (str.length() > 10)
	{
		firstName = str.substr(0, 10);
		firstName[firstName.length() - 1] = '.';
	}
	else
		firstName = str;
}

void	Contact::set_lastName(std::string str)
{
	if (str.length() > 10)
	{
		lastName = str.substr(0, 10);
		lastName[lastName.length() - 1] = '.';
	}
	else
		lastName = str;
}

void	Contact::set_nickname(std::string str)
{
	if (str.length() > 10)
	{
		nickname = str.substr(0, 10);
		nickname[nickname.length() - 1] = '.';
	}
	else
		nickname = str;
}

void	Contact::set_number(std::string nbr)
{
	if (nbr.length() > 10)
	{
		number = nbr.substr(0, 10);
		number[number.length() - 1] = '.';
	}
	else
		number = nbr;
}

void	Contact::set_darkestSecret(std::string str)
{
	if (str.length() > 10)
	{
		darkestSecret = str.substr(0, 10);
		darkestSecret[darkestSecret.length() - 1] = '.';
	}
	else
		darkestSecret = str;
}
