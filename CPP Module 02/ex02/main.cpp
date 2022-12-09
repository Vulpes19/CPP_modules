/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:24:15 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/09 18:28:07 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    // Fixed c(Fixed(2) * Fixed(2));
    // Fixed a(1);
    // Fixed b(1);
    // Fixed y(0.1f);
    // // c--;
    // // std::cout << c << std::endl;
    // // --c;
    // // if (a == b)
    // //     std::cout << "a and b are equal" << std::endl;
    // // if (a > y)
    // //     std::cout << a << " is bigger than " << y << std::endl;
    // // if (a >= b)
    // //     std::cout << a << " is bigger than or equal to " << b << std::endl;
    // std::cout << "min " << Fixed::min(a, y) << std::endl;
    // std::cout << c << std::endl;
}