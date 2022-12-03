/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>        	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:32:53 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/17 11:06:48 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie  *zombieHorde( int N, std::string name );

int	main( void )
{
	Zombie *horde;

	horde = zombieHorde(3, "Ayman");
	delete [] horde;
}