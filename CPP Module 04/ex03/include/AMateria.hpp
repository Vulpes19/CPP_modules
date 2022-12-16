/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:17:13 by codespace         #+#    #+#             */
/*   Updated: 2022/12/16 17:06:24 by abaioumy         ###   ########.fr       */
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
		std::string const &getType( void ) const;
		virtual AMateria *clone( void ) const = 0;
		virtual	void	use( ICharacter &target );
};

#endif