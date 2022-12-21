/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:16:48 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/20 14:53:23 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"

class AMateria;
class ICharacter
{
	public:
		virtual	~ICharacter( void ){};
		virtual	std::string const &getName( void ) const = 0;
		virtual	void	equip( AMateria *m ) = 0;
		virtual	void	unequip( int idx ) = 0;
		virtual	void	use( int idx, ICharacter &target ) = 0;
};

#endif