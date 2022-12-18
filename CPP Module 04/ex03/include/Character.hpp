/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:08:06 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/18 20:24:34 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"


class AMateria;
class Character : public ICharacter
{
    public:
        Character( std::string & );
        ~Character( void );
		std::string const &getName( void ) const;
		void	equip( AMateria *m );
		void	unequip( int idx );
		void	use( int idx, ICharacter &target );
    private:
        std::string name;
        AMateria    *inventory[4];
};

#endif