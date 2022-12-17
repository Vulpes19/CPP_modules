/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:15:00 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/17 16:58:26 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    public:
        ScavTrap( std::string n );
        ~ScavTrap( void );
        void    attack( const std::string &target );
        void    updateAttScav( std::string );
        void    guardGate( void );
        int     getEnergyPoints( void ) { return (energyPoints); }
};

#endif