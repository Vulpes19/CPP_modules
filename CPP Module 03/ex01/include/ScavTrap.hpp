/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:15:00 by codespace         #+#    #+#             */
/*   Updated: 2022/10/29 13:15:19 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        explicit ScavTrap( std::string n ) : ClapTrap( n ) { std::cout << "ScavTrap is created" << std::endl; };
        ~ScavTrap( void );
        void    attack( const std::string &target );
        void guardGate( void );
};

#endif