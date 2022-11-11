/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:35:41 by abaioumy          #+#    #+#             */
/*   Updated: 2022/11/11 11:16:32 by codespace        ###   ########.fr       */
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

void    Zombie::anounce( void )
{
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}