/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:19:39 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/17 20:45:43 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class   FragTrap : virtual public ClapTrap
{
	public:
		FragTrap( std::string n );
		FragTrap( const FragTrap & );
        FragTrap &operator= ( const FragTrap & );
		~FragTrap( void );
		void    highFivesGuys( void );
};

#endif