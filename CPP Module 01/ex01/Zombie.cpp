/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:35:41 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/02 14:24:01 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
    std::cout << "Zombie class is created" << std::endl;
}

Zombie::~Zombie( void )
{
    std::cout << name << " Zombie is dead ?!" << std::endl;
}

void    Zombie::setName( std::string name )
{
    this->name = name;
}

void    Zombie::anounce( void )
{
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}