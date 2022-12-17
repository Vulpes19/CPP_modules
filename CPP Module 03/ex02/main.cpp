/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:07:23 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/17 20:44:05 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
    ScavTrap    S("Cat");
    FragTrap    F("Dog");
    ClapTrap C("Wolf");

    S.attack("Dog");
    S.guardGate();
    C.attack("Cat");
    F.attack("Cat");
    F.highFivesGuys();
}