/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:17:13 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/21 19:21:28 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

#include "ICharacter.hpp"
class AMateria
{
	protected:
		std::string	type;
	public:
		AMateria( std::string const &type );
		AMateria( const AMateria & );
		AMateria &operator= ( const AMateria & );
		virtual~AMateria( void );
		std::string const &getType( void ) const;
		virtual AMateria *clone( void ) const = 0;
		virtual	void	use( ICharacter &target );
};

#endif