/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 20:27:28 by abaioumy          #+#    #+#             */
/*   Updated: 2023/01/01 15:30:36 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void )
{}

Span::Span( unsigned int N )
{
    integers.resize(N);
    std::fill(integers.begin(), integers.end(), 0);
}

Span::Span( const Span &newSpan )
{
    integers.assign(newSpan.integers.begin(), newSpan.integers.end());
}

Span    &Span::operator=( const Span &newSpan )
{
    if ( this != &newSpan )
    {
        integers.assign(newSpan.integers.begin(), newSpan.integers.end());
    }
    return (*this);
}

void    Span::addNumber( unsigned int N )
{
    std::vector<int>::iterator last = integers.end();
    last--;
    if ( *last != 0 )
        throw(std::runtime_error("already filled"));
    for ( unsigned int i = 0; i < integers.size(); i++)
    {
        if (integers[i] == 0)
        {
            integers[i] = N;
            break ;
        }
    }
}

int    Span::shortestSpan( void )
{
    int min = -1;

    if ( integers.empty() || integers.size() == 1 )
        throw(std::runtime_error("no span can be found"));
    std::sort(integers.begin(), integers.end());
    for ( unsigned int i = 0; i < integers.size(); i++ )
    {
        for ( unsigned int j = i + 1; j < integers.size(); j++ )
        {
            if ( integers[j] - integers[i] < min || min == -1 )
                min = integers[j] - integers[i];       
        }
    }
    if ( min == -1 )
        throw(std::runtime_error("no span can be found"));
    return (min);
}

int    Span::longestSpan( void )
{
    if ( integers.empty() || integers.size() == 1 )
        throw(std::runtime_error("no span can be found"));
    std::sort(integers.begin(), integers.end());
    std::vector<int>::iterator first = integers.begin();
    std::vector<int>::iterator last = integers.end();
    last--;
    return (std::abs(*first - *last));
}