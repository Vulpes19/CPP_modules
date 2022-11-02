/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:43:18 by codespace         #+#    #+#             */
/*   Updated: 2022/11/02 10:38:20 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
    type = "Dog";
    B = new Brain;
    std::cout << "bark I'm created !" << std::endl;
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