/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:50:17 by codespace         #+#    #+#             */
/*   Updated: 2022/11/14 12:34:31 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( std::string const &type ) : this->type(type)
{
	std::cout << "AMateria is created" << std::endl;
}

AMateria::AMateria( const AMateria &M )
{
	std::cout << "copy constructor called" << std::endl;
	type = M.type;
}

AMateria	&AMateria::operator=( const AMateria &M )
{
	if ( *this != M )
		type = M.type;
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

void	AMateria::use( ICharacter &target )
{

}