/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:22:02 by codespace         #+#    #+#             */
/*   Updated: 2022/10/31 11:31:30 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
    DiamondTrap( std::string n) : ClapTrap( n.append("_clap_name") ), ScavTrap( n ), FragTrap( n ) { updateName( n ); };
    ~DiamondTrap( void );
    void    updateName( std::string );
    void    attack( std::string &target );
    void    whoAmI( void );  
private:
    std::string name;
};

#endif