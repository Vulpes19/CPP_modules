/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:15:00 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/17 20:45:39 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    public:
        ScavTrap( std::string n );
        ScavTrap( const ScavTrap & );
		ScavTrap	&operator=(const ScavTrap & );
        ~ScavTrap( void );
        void    attack( const std::string &target );
        void    guardGate( void );
};

#endif