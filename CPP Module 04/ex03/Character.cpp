/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:24:53 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/21 20:24:43 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( const std::string &name ) : ICharacter()
{
    std::cout << "Character is created" << std::endl;
    this->name = name;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character( const Character &ch )
{
    std::cout << "Character copy constructor is called" << std::endl;
    *this = ch;
}

Character   &Character::operator= ( const Character &ch )
{
    std::cout << "Character copy assignement operator is called" << std::endl;
    if ( this != &ch )
    {
        AMateria    *newInventory[4];
        name = ch.name;
        for ( int i = 0; i < 4; i++ )
        {
            if (ch.inventory[i])
                newInventory[i] = ch.inventory[i]->clone();
            else
                newInventory[i] = NULL;
        }
        for ( int i = 0; i < 4; i++ )
        {
            delete inventory[i];
        }
        for ( int i = 0; i < 4; i++ )
        {
            inventory[i] = newInventory[i];
        }
    }
    return (*this);
}

Character::~Character( void )
{
    std::cout << "Character is destroyed" << std::endl;
}

std::string const &Character::getName( void ) const
{
    return (name);
}

void    Character::equip( AMateria *newMateria )
{
    if ( newMateria == NULL )
    {
        std::cout << "The AMateria is empty" << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == NULL)
        {
            std::cout << "The Materia " << newMateria->getType() << " is equipped succesfully" << std::endl;
            inventory[i] = newMateria;
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