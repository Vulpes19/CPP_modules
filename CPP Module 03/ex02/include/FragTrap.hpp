/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:19:39 by codespace         #+#    #+#             */
/*   Updated: 2022/10/29 14:40:03 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class   FragTrap : public ClapTrap
{
    public:
        FragTrap( std::string n ) : ClapTrap( n ) { std::cout << "FragTrap is created" << std::endl; };
        ~FragTrap( void );
        void    highFivesGuys( void );
};

#endif