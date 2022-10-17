/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:32:53 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/17 11:06:48 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main( void )
{
	Zombie Z;
	Zombie *horde;
	int	N = 3;

	horde = Z.zombieHorde(N, "Ayman");
	delete [] horde;
}