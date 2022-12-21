/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:33:33 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/20 16:02:51 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ): type("random Animal")
{
	std::cout << "Animal is created" << std::endl;
}

Animal::Animal( const Animal &A )
{
	std::cout << "copy constructor called" << std::endl;
	type = A.type;
}

Animal::~Animal( void )
{
	std::cout << "Animal is destoryed" << std::endl;
}

Animal	&Animal::operator=( const Animal &A )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &A)
	{
		type = A.type;
	}
	return (*this);
}

std::string	Animal::getType( void ) const
{
	return (type);
}