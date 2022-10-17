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

int	main()
{
	Zombie a("hamid");
	Zombie b("hmar");
	Zombie *c;

	c = a.newZombie("hamid2");
	b.randomChump("hmar2");
	delete c;
	return (0);
}