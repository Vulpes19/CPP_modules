/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:23:08 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/25 15:55:35 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.hpp"

int main( void )
{
    vector test;
    vector *test2;
    uintptr_t ptr;
    test.x = 0;
    test.y = 1;
    std::cout << test.x << std::endl;
    std::cout << test.y << std::endl;
    ptr = serialize( &test );
    test2 = deserialize( ptr );
    std::cout << test2->x << std::endl;
    std::cout << test2->y << std::endl;
}