/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:15:54 by codespace         #+#    #+#             */
/*   Updated: 2022/12/18 20:21:46 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
    std::cout << "Ice is created" << std::endl;
}

Ice &Ice::operator=( const Ice &I )
{
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
