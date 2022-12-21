/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:15:51 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/20 14:53:52 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
    std::cout << "Cure is created" << std::endl;
}

Cure::Cure( const Cure &C ) : AMateria( C )
{
    std::cout << "Cure copy constructor is called" << std::endl;
}

Cure    &Cure::operator=( const Cure &C )
{
    std::cout << "Cure copy assignement operator is called" << std::endl;
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
