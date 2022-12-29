/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:30:45 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/29 14:45:48 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <iterator>

template <typename T >

void    easyFind( T container, int nbr )
{
    typedef typename T::iterator iter;

    iter it = std::find( container.begin(), container.end(), nbr );
    
    if ( it != container.end() )
        std::cout << nbr << " is found at: " << std::distance( container.begin(), it ) << std::endl;
    else
        throw(std::runtime_error("not found"));
}

#endif