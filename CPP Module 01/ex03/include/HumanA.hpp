/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:39:35 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/03 14:48:14 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA( std::string newName, Weapon &newWeapon );
        ~HumanA( void );
        void    attack( void );
        std::string gett( void ) { return weapon.getType(); };
    private:
        Weapon &weapon;
        std::string Name;
};

#endif