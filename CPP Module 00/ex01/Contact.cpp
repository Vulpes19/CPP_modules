/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:48:24 by abaioumy          #+#    #+#             */
/*   Updated: 2022/11/26 16:55:11 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set_firstName( std::string str )
{
	firstName = str;
}

std::string	Contact::get_firstName( void )
{
	return (firstName);
}

void	Contact::set_lastName( std::string str )
{
	lastName = str;
}

std::string	Contact::get_lastName( void )
{
	return (lastName);
}

void	Contact::set_nickname( std::string str )
{
	nickname = str;
}

std::string	Contact::get_nickname( void )
{
	return (nickname);
}

void	Contact::set_number( std::string nbr )
{
	number = nbr;
}

std::string	Contact::get_number( void )
{
	return (number);
}

void	Contact::set_darkestSecret( std::string str )
{
	darkestSecret = str;
}

std::string	Contact::get_darkestSecret( void )
{
	return (darkestSecret);
}