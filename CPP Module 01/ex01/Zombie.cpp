/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:35:41 by codespace         #+#    #+#             */
/*   Updated: 2022/10/17 11:17:41 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
    anounce();
}

Zombie::~Zombie( void )
{
    std::cout << name << " Zombie is dead ?!" << std::endl;
}

void    Zombie::anounce( void )
{
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}