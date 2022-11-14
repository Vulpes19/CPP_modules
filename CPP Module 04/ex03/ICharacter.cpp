/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:24:53 by codespace         #+#    #+#             */
/*   Updated: 2022/11/14 13:07:01 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter( std::string name ) : inventory(NULL)
{
    std::cout << "ICharacter is created" << std::endl;
    this->name = name;
}

ICharacter::~ICharacter( void )
{
    std::cout << "ICharacter is destroyed" << std::endl;
}

void    ICharacter::equip( AMateria *m )
{
    if ( m->getType() == "ice" )
        inventory[index] = &m;
}