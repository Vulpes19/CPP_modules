/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:07:23 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/17 19:20:38 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap C("Dovahkiin");

    // C.takeDamage(10);
    // for (int i = 0; i < 10; i++)
    //     C.beRepaired(10);
    // C.beRepaired(10);
    C.attack("Dragon");
}