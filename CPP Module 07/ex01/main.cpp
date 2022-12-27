/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:12:35 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/27 16:48:57 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void increment( int &nbr )
{
    nbr++;
}

int main( void )
{
    int arr[4] = {1, 2 ,3, 4};
    ::iter(arr, 4, increment);
    for ( int i = 0; i < 4; i++ )
        std::cout << arr[i] << std::endl;
}