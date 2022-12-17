/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:19:39 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/17 16:58:10 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class   FragTrap : virtual public ClapTrap
{
	public:
		FragTrap( std::string n );
		~FragTrap( void );
		void    updateAttFrag( std::string );
		void    highFivesGuys( void );
		int		getHitpoints( void ) { return (hitPoints); };
		int		getAttackDamage( void ) { return (attackDamage); }
};

#endif