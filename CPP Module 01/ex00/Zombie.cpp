/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:42:08 by codespace         #+#    #+#             */
/*   Updated: 2022/10/16 19:59:17 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string in)
{
    name = in;
    anounce();
}

Zombie::~Zombie( void )
{
    std::cout << name << "Zombie is dead ?!" << std::endl;
}

void    Zombie::anounce( void )
{
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
