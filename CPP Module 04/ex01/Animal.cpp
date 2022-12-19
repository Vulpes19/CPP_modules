/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:33:33 by codespace         #+#    #+#             */
/*   Updated: 2022/12/19 19:34:14 by abaioumy         ###   ########.fr       */
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
		std::cout << "here" << std::endl;
		type = A.type;
	}
		std::cout << "here" << std::endl;

	return (*this);
}

std::string	Animal::getType( void ) const
{
	return (type);
}

void	Animal::makeSound( void ) const
{
	std::cout << "idk it's a random animal sound" << std::endl;
}