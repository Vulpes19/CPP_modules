/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:50:17 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/20 14:53:38 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( std::string const &type ) : type(type)
{
	std::cout << "AMateria is created" << std::endl;
}

AMateria::AMateria( const AMateria &m )
{
	std::cout << "AMateria copy constructor is called" << std::endl;
	*this = m;
}

AMateria	&AMateria::operator= ( const AMateria &m )
{
	std::cout << "AMateria copy assignement operator is called" << std::endl;
	if ( this != &m )
	{
		type = m.type;
	}
	return (*this);
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria is destroyed" << std::endl;
}

std::string	const	&AMateria::getType( void ) const
{
	return (type);
}
 void AMateria::use( ICharacter &target )
 {
	std::cout << target.getName() << " is weak" << std::endl;
 }