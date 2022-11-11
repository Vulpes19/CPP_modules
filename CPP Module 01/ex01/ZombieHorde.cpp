/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>        	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:35:51 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/17 11:17:58 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *Zombie::zombieHorde( int N, std::string name )
{
	Zombie *Z = new Zombie[N];

	for ( int i = 0; i < N; i++ )
	{
		Z[i].name = name;
		Z[i].anounce();
	}
	return (Z);
}