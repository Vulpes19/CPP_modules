/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:15:51 by codespace         #+#    #+#             */
/*   Updated: 2022/12/18 20:21:32 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
    std::cout << "Cure is created" << std::endl;
}

Cure    &Cure::operator=( const Cure &C )
{
    this->type = C.type;
    return (*this);
}

Cure::~Cure( void )
{
    std::cout << "Cure is destroyed" << std::endl;
}

Cure *Cure::clone( void ) const
{
    Cure *ret = new Cure();
    return (ret);
}

void    Cure::use( ICharacter &target )
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
