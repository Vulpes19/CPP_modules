/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:41:29 by codespace         #+#    #+#             */
/*   Updated: 2022/10/31 12:55:41 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
    type = "Cat";
    std::cout << "meow I'm created !" << std::endl;
}

Cat::~Cat( void )
{
    std::cout << "Cat is destroyed" << std::endl;
}

void	Animal::makeSound( void )
{
	std::cout << "meooooow !!" << std::endl;
}