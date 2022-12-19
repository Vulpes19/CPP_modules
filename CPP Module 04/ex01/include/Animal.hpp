/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:26:17 by codespace         #+#    #+#             */
/*   Updated: 2022/12/19 15:53:24 by abaioumy         ###   ########.fr       */
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
		virtual	~Animal( void );
		virtual void	makeSound( void ) const;
	protected:
		std::string type;
};

#endif