/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 21:22:02 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/18 13:39:30 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
    DiamondTrap( std::string );
    DiamondTrap( const DiamondTrap & );
    DiamondTrap &operator= ( const DiamondTrap & );
    ~DiamondTrap( void );
    void    updateName( std::string );
    //void    attack( std::string &target );
    void    whoAmI( void );  
private:
    std::string name;
};

#endif