/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:26:17 by codespace         #+#    #+#             */
/*   Updated: 2022/11/01 12:11:00 by codespace        ###   ########.fr       */
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
		std::string	getType( void ) const { return (type); };
		~Animal( void );
		virtual void	makeSound( void ) const;
	protected:
		std::string type;
};

#endif