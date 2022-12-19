/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:41:29 by codespace         #+#    #+#             */
/*   Updated: 2022/12/19 18:16:31 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
    type = "Cat";
    std::cout << "meow I'm created !" << std::endl;
}

Cat::Cat( const Cat &C )
{
    std::cout << "Cat copy constructor is called" << std::endl;
    *this = C;
}

Cat &Cat::operator= ( const Cat &C )
{
    std::cout << "Cat copy assignement operator is called" << std::endl;
    if (this != &C)
    {
        type = C.type;
    }
    return (*this);
}

Cat::~Cat( void )
{
    std::cout << "Cat is destroyed" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "meooooow !" << std::endl;
}