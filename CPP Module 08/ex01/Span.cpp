/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 20:27:28 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/30 20:44:42 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdexcept>

Span::Span( void ) : integers(0), size(0)
{}

Span::Span( unsigned int N )
{
    integers = new int[N];
    size = N;
}

Span::Span( const Span &newSpan )
{
    size = newSpan.size;
    integers = new int[size];
    for ( int i = 0; i < size; i++ )
    {
        integers[i] = newSpan.integers[i];
    }
}

Span    &Span::operator=( const Span &newSpan )
{
    if ( this != &newSpan )
    {
        delete [] integers;
        size = newSpan.size;
        for ( int i = 0; i < size; i++)
        {
            integers[i] = newSpan.integers[i];
        }
    }
    return (*this);
}

void    Span::addNumber( unsigned int N )
{
    if (integers[size - 1] == N)
        throw(std::runtime_error("already filled"));
    for ( int i = 0; i < size; i++)
    {
        if (integers[i] == 0)
            integers[i] = N;
    }
}

void    Span::shortestSpan( void )
{

}

void    Span::longestSpan( void )
{
    
}