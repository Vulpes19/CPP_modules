/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:35:13 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/27 16:48:23 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename SIZE, typename Func>

void    iter( T *arr, SIZE len, Func func )
{
    for( int i = 0; i < len; i++ )
        func(arr[i]);
}

#endif