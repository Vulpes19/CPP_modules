/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:41:29 by codespace         #+#    #+#             */
/*   Updated: 2022/12/16 15:38:39 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat( void ) : Animal()
{
    type = "Cat";
    B = new Brain;
    std::cout << "meow I'm created !" << std::endl;
}

Cat::~Cat( void )
{
    std::cout << "Cat is destroyed" << std::endl;
    delete B;
}

void	Cat::makeSound( void ) const
{
	std::cout << "meooooow !!" << std::endl;
}