/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:15:51 by codespace         #+#    #+#             */
/*   Updated: 2022/11/14 12:24:15 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
    std::cout << "Cure is created" << std::endl;
}

Cure::~Cure( void )
{
    std::cout << "Cure is destroyed" << std::endl;
}

Cure *Cure::clone( void )
{
    return (this);
}

void    Cure::use( ICharacter &target )
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
