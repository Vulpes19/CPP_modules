/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:15:00 by codespace         #+#    #+#             */
/*   Updated: 2022/11/01 10:59:50 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    public:
        ScavTrap( std::string n ) : ClapTrap( n) { updateAttScav(n); };
        ~ScavTrap( void );
        virtual void    attack( const std::string &target );
        void    updateAttScav( std::string );
        void    guardGate( void );
        int     getEnergyPoints( void ) { return (energyPoints); }
};

#endif