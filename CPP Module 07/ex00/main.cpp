/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:03:08 by codespace         #+#    #+#             */
/*   Updated: 2022/11/09 11:39:23 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Max.hpp"
#include "Min.hpp"
#include "Swap.hpp"
#include <iostream>

int main( void )
{
    int a = 1;
    int b = 2;

    ::swap(a, b);
    std::cout << a << " " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

}