/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:52:29 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/27 17:28:29 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>
#include <stdexcept>

template <typename T>

class Array
{
    public:
        Array( void );
        Array( unsigned int );
        Array( const Array & );
        Array   &operator=( const Array & );
        void    *operator new( std::size_t size );
        T       &operator[]( std::size_t index );
        std::size_t size( void ) const;
    private:
        std::size_t size;
        T           *elements;
};

#endif