/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:22:32 by abaioumy          #+#    #+#             */
/*   Updated: 2023/03/26 17:08:23 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

int main( int ac, char **av )
{
    if ( ac != 2 )
    {
        std::cerr << "Error: [executable] [RPN expression]\n";
        return (1);
    }
    RPN rpn;
    rpn.readExpression(av[1]);
    return (0);
}