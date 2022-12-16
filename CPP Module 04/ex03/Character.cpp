/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:24:53 by codespace         #+#    #+#             */
/*   Updated: 2022/12/16 17:31:48 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string &name ) : ICharacter()
{
    std::cout << "ICharacter is created" << std::endl;
    this->name = name;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::~Character( void )
{
    std::cout << "Character is destroyed" << std::endl;
}

void    Character::equip( AMateria *m )
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == NULL)
        {
            inventory[i] = m;
            break ;
        }
    }
}

void    Character::unequip( int idx )
{
    inventory[idx] = NULL;
}

void    Character::use( int idx, ICharacter &target )
{
    inventory[idx]->use( target );
}