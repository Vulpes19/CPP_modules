/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:04:25 by codespace         #+#    #+#             */
/*   Updated: 2022/12/18 20:07:57 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"

class AMateria;
class	IMateriaSource
{
	public:
		virtual	~IMateriaSource( void );
		virtual	void	learnMateria( AMateria* ) = 0;
		virtual	AMateria	*createMateria( std::string const &type ) = 0;
};

#endif