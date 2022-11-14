/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:16:48 by codespace         #+#    #+#             */
/*   Updated: 2022/11/14 13:01:53 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"

class ICharacter
{
	public:
		ICharacter( std::string name );
		virtual	~ICharacter( void );
		virtual	std::string const &getName( void ) const = 0;
		virtual	void	equip( AMateria *m ) = 0;
		virtual	void	unequip( int idx ) = 0;
		virtual	void	use( int idx, ICharacter &target ) = 0;
	private:
		std::string	name;
		AMateria	**inventory;
		int			index;
};

#endif