/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:04:25 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/20 14:53:30 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "Cure.hpp"
#include "Ice.hpp"

class AMateria;
// class Ice;
class	IMateriaSource
{
	public:
		virtual	~IMateriaSource( void ){};
		virtual	void	learnMateria( AMateria* ) = 0;
		virtual	AMateria	*createMateria( std::string const &type ) = 0;
};

#endif