/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:32:09 by codespace         #+#    #+#             */
/*   Updated: 2022/10/29 14:39:24 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap( void )
{
    std::cout << "FragTrap is destroyed" << std::endl;
}

void    FragTrap::highFivesGuys( void )
{
    std::cout << "HIGH FIVE" << std::endl;
}