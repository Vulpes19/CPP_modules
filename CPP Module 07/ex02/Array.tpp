/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:26:36 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/27 18:26:47 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array( void ) : _size(0), element(NULL)
{}

Array::Array( unsigned int N ) : _size(N), elements( new T[N] )
{}

Array::Array( const Array &newArr )
{
    *this = newArr;
}

Array   &Array::operator=( const Array &newArr )
{
    if ( this != &newArr )
    {
        delete [] elements;
        _size = newArr.size();
        elements = new T[_size];
        for ( int i = 0; i < _size; i++ )
            elements[i] = newArr[i];
    }
    return (*this);
}

void    *Array::operator new( std::size_t _size )
{
    void *elm = new T[_size];
    return (elm);
}

T       &Array::operator[]( std::size_t index )
{
    if ( index < 0 || index >= _size )
        throw( std::out_of_range );
    return ( elements[index] );
}

std::size_t Array::size( void ) const
{
    return ( _size );
}