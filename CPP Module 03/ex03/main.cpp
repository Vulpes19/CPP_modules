/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:07:23 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/17 20:51:53 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
    DiamondTrap D("Monster");
    std::cout << "*****" << std::endl;
    ClapTrap C("Original character");
    std::cout << "*****" << std::endl;
    ScavTrap S("Robot1");
    std::cout << "*****" << std::endl;
    FragTrap F("Robot2");
    std::cout << "*****" << std::endl;

    C.attack("villain");
    F.attack("villain");
    S.attack("villain");
    D.attack("hmar");
    D.takeDamage(10);
    D.whoAmI();
}