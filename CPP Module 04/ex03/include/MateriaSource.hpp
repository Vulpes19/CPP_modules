/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:04:25 by codespace         #+#    #+#             */
/*   Updated: 2022/11/14 12:07:37 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"

class	IMateriaSource
{
	public:
		IMateriaSource( void );
		virtual	~IMateriaSource( void );
		virtual	void	learnMateria( AMateria* ) = 0;
		virtual	AMateria	*createMateria( std::string const &type ) = 0;
};

#endif