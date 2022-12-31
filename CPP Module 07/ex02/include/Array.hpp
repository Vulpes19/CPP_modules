/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:52:29 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/31 14:56:07 by abaioumy         ###   ########.fr       */
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
        Array( void ) : _size(1) 
        { 
            elements = new T[1];
            elements[0] = 0;
        };
        Array( unsigned int N ) : _size(N)
        {
            elements = new T[N];
        };
        Array( const Array &newArr ) : _size(newArr._size)
        {
            elements = new T[_size];
            for ( std::size_t i = 0; i < _size; i++ )
            {
                elements[i] = newArr.elements[i];
            }
        };
        ~Array( void )
        {
            delete [] elements;
        };
        Array   &operator=( const Array &newArr )
        {
            if ( this != &newArr )
            {
                if (elements)
                    delete [] elements;
                elements = new T[_size];
                for ( std::size_t i = 0; i < _size; i++ )
                {
                    elements[i] = newArr.elements[i];
                }
            }
            return (*this);
        };
        T       &operator[]( std::size_t index )
        {
             if ( index < 0 || index >= _size )
             {
                throw( std::out_of_range("error: out of range") );
             }
            return ( elements[index] );
        };
        std::size_t size( void ) const { return (_size); };
    private:
        std::size_t _size;
        T           *elements;
};

#endif