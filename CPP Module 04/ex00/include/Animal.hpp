/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vulpes <vulpes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:26:17 by codespace         #+#    #+#             */
/*   Updated: 2022/11/30 14:38:31 by vulpes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal( void );
		Animal( const Animal & );
		Animal	&operator=(const Animal & );
		std::string	getType( void ) const;
		~Animal( void );
		virtual void	makeSound( void ) const;
	protected:
		std::string type;
};

#endif