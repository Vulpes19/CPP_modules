/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:43:18 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/20 16:00:51 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
    type = "Dog";
    std::cout << "bark I'm created !" << std::endl;
}

Dog::Dog( const Dog &D )
{
    std::cout << "Cat copy constructor is called" << std::endl;
    *this = D;
}

Dog &Dog::operator= ( const Dog &D )
{
    std::cout << "Cat copy assignement operator is called" << std::endl;
    if (this != &D)
    {
        type = D.type;
    }
    return (*this);
}

Dog::~Dog( void )
{
    std::cout << "Dog is destroyed" << std::endl;
}

void    Dog::makeSound( void ) const
{
	std::cout << "bark bark !" << std::endl;
}