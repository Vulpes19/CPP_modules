/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:43:18 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/20 16:03:08 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
    type = "Dog";
    B = new Brain;
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
        delete B;
        B = new Brain(*(D.B));
    }
    return (*this);
}

Dog::~Dog( void )
{
    std::cout << "Dog is destroyed" << std::endl;
    delete B;
}

void    Dog::makeSound( void ) const
{
	std::cout << "bark bark !" << std::endl;
}