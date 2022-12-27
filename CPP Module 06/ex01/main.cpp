/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:23:08 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/26 18:32:00 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.hpp"

int main( void )
{
    vector vec;
    vector *vec2;
    uintptr_t ptr;
    vec.x = 0;
    vec.y = 1;
    std::cout << "Before serialization" << std::endl;
    std::cout << vec.x << std::endl;
    std::cout << vec.y << std::endl;
    ptr = serialize( &vec );
    vec2 = deserialize( ptr );
    std::cout << "After serialization" << std::endl;
    std::cout << vec2->x << std::endl;
    std::cout << vec2->y << std::endl;
}