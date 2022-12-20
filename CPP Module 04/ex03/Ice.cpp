/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:15:54 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/20 14:54:00 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
    std::cout << "Ice is created" << std::endl;
}

Ice::Ice( const Ice &I ) : AMateria( I )
{
    std::cout << "Ice copy constructor is called" << std::endl;
}

Ice &Ice::operator=( const Ice &I )
{
    std::cout << "Ice copy assignement operator is called" << std::endl;
    this->type = I.type;
    return (*this);
}

Ice::~Ice( void )
{
    std::cout << "Ice is destroyed" << std::endl;
}

Ice *Ice::clone( void ) const
{
    Ice *ret = new Ice();
    return (ret);
}

void    Ice::use( ICharacter &target )
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
