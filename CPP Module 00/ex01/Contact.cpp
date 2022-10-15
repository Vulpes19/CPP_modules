/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:42:34 by codespace         #+#    #+#             */
/*   Updated: 2022/10/15 19:34:03 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

void	Contact::set_firstName(std::string str)
{
	
		firstName = str;
}

void	Contact::set_lastName(std::string str)
{
	
	
		lastName = str;
}

void	Contact::set_nickname(std::string str)
{
	
		nickname = str;
}

void	Contact::set_number(std::string nbr)
{
	
		number = nbr;
}

void	Contact::set_darkestSecret(std::string str)
{	
		darkestSecret = str;
}
