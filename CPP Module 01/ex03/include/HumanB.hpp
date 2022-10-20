/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:39:30 by codespace         #+#    #+#             */
/*   Updated: 2022/10/18 12:12:01 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>

class HumanB
{
    public:
        HumanB( std::string newName );
        ~HumanB( void );
        void    setWeapon(std::string &newWeapon);
        void    attack( void );
    private:
        Weapon  weapon;
        std::string name;
};

#endif