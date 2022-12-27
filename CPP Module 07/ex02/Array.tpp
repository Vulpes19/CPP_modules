/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 17:18:33 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/27 17:29:56 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array( void ) : size(0), element(0)
{}

Array::Array( unsigned int N ) : size(N), elements( new T[N] )
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
        size = newArr.size();
        elements = new T[size];
        for ( int i = 0; i < size; i++ )
            elements[i] = newArr[i];
    }
    return (*this);
}

void    *Array::operator new( std::size_t size )
{
    void *elm = new T[size];
    return (elm);
}

T       &Array::operator[]( std::size_t index )
{
    if ( index < 0 || index >= size )
        throw( std::out_of_range );
    return ( elements[index] );
}

std::size_t Array::size( void ) const
{
    return ( size );
}