/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:39:30 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/03 14:48:34 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB( std::string newName );
        ~HumanB( void );
        void    setWeapon( Weapon &newWeapon );
        void    attack( void );
    private:
        Weapon  *weapon;
        std::string Name;
};

#endif