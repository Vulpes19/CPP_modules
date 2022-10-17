/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:36:08 by codespace         #+#    #+#             */
/*   Updated: 2022/10/17 11:18:09 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie( void );
		~Zombie();
		Zombie	*zombieHorde( int N, std::string name );
		void	anounce( void );
	private:
		std::string name;
};

#endif