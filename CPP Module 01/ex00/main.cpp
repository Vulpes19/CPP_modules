/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>        	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:40:51 by abaioumy          #+#    #+#             */
/*   Updated: 2022/10/17 10:28:13 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie *newZombie( std::string name );
void    randomChump( std::string name );

int	main()
{
	Zombie a("hamid");
	Zombie b("hmar");
	Zombie *c;

	a.anounce();
	b.anounce();
	c = newZombie("hamid2");
	c->anounce();
	randomChump("hmar2");
	delete c;
	return (0);
}