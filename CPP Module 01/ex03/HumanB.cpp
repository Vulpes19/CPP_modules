/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>        	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:41:26 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/17 17:10:10 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string newName)
{
	Name = newName;
}

HumanA::~HumanA( void )
{
	std::cout << Name << " is dead :(" << std::endl;
}

void	HumanA::attack( void )
{
	std::cout << Name << " attacks with their " << Weapon << std::endl;
}