/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>        	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:38:28 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/18 12:10:46 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main( void )
{
	Weapon	sword = Weapon("sword");

	HumanA hamid("Hamid", sword);
	hamid.attack();
	sword.setType("other type");
	hamid.attack();

	Weapon	sword2 = Weapon("sword");

	HumanB hamid("Hamid");
	hamid.s
	hamid.attack();
	sword.setType("other type");
	hamid.attack();
}