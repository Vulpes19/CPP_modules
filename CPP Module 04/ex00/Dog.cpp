/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:43:18 by codespace         #+#    #+#             */
/*   Updated: 2022/10/31 12:59:17 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
    type = "Dog";
    std::cout << "bark I'm created !" << std::endl;
}

Dog::~Dog( void )
{
    std::cout << "Dog is destroyed" << std::endl;
}

void    Dog::makeSound( void )
{
	std::cout << "bark bark !" << std::endl;
}