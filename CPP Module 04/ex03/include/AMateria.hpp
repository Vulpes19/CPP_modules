/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:17:13 by codespace         #+#    #+#             */
/*   Updated: 2022/11/14 12:55:06 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "MateriaSource.hpp"

class AMateria
{
	protected:
		std::string	type;
	public:
		AMateria( std::string const &type );
		AMateria( const AMateria & );
		AMateria	&operator=( const AMateria & );
		std::string const &getType( void ) const;
		virtual AMateria *clone( void ) const = 0;
		virtual	void	use( ICharacter &target );
};

#endif