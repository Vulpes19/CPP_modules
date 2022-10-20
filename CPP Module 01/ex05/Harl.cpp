/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:05:59 by codespace         #+#    #+#             */
/*   Updated: 2022/10/20 15:05:11 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

typedef void    (Harl::*pointer_member) (void);

void    Harl::complain( std::string level)
{
    std::string functions[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    pointer_member ptr[4] = {&Harl::DEBUG, &Harl::INFO, &Harl::WARNING, &Harl::ERROR};
    for (int i = 0; i < 4; i++)
    {
        if (functions[i] == level)
        {
            Harl::ptr[i](void);
            break ;
        }
    }
}

void    Harl::debug( void )
{
    std::cout << "I love having extra bacon for "
            << "my 7XL-double-cheese-triple-pickle-"
            << "special- ketchup burger. I really do!" 
            << std::endl;
}

void    Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money."
        << " You didn’t put enough bacon in my burger! If you did, "
        << "I wouldn’t be asking for more!"
        << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free."
        << " I’ve been coming for years whereas you started"
        << " working here since last month."
        << std::endl;
}

void    Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}