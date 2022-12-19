/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:24:53 by codespace         #+#    #+#             */
/*   Updated: 2022/12/19 17:14:05 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( const std::string &name ) : ICharacter()
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

std::string const &Character::getName( void ) const
{
    return (name);
}

void    Character::equip( AMateria *m )
{
    if ( m == NULL )
    {
        std::cout << "The AMateria is empty" << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == NULL)
        {
            std::cout << "The Materia " << m->getType() << " is equipped succesfully" << std::endl;
            inventory[i] = m;
            break ;
        }
    }
}

void    Character::unequip( int idx )
{
    if ( idx >= 0 && idx < 4 )
    {
        std::cout << inventory[idx]->getType() << " is unequiped succesfully" << std::endl;
        inventory[idx] = NULL;
    }
    else
        std::cout << "index is out of range, it must be (0 <= index and index < 4)" << std::endl;
}

void    Character::use( int idx, ICharacter &target )
{
    if ( idx >= 0 && idx < 4 )
    {
        if (inventory[idx])
            inventory[idx]->use( target );
        else
            std::cout << "This inventory slot is empty" << std::endl;
    }
    else
        std::cout << "index is out of range, it must be (0 <= index and index < 4)" << std::endl;
}