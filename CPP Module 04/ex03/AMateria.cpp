/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:50:17 by codespace         #+#    #+#             */
/*   Updated: 2022/12/18 20:10:22 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( std::string const &type ) : type(type)
{
	std::cout << "AMateria is created" << std::endl;
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria is destroyed" << std::endl;
}

std::string	const	&AMateria::getType( void ) const
{
	return (type);
}
