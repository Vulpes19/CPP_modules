/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>        	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:41:41 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/17 17:18:39 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string newType )
{
	type = newType;
}

const	std::string	Weapon::getType( void )
{
	return (type);
}

void    Weapon::setType( std::string newType)
{
	type = newType;
}
