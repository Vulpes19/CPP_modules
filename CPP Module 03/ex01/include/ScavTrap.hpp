/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:15:00 by codespace         #+#    #+#             */
/*   Updated: 2022/11/13 17:13:28 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap( std::string n ) : ClapTrap( n ) { updateAtt(n);};
        ~ScavTrap( void );
        void    attack( const std::string &target );
        void    updateAtt( std::string );
        void guardGate( void );
};

#endif