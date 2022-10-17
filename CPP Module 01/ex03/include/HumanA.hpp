/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:39:35 by codespace         #+#    #+#             */
/*   Updated: 2022/10/17 15:48:51 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>

class HumanA
{
    public:
        HumanA( std::string newWeapon);
        ~HumanA( void );
        void    attack( void );
    private:
        std::string Weapon;
        std::string name;
};

#endif