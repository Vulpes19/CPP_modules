/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:34:29 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/11 20:57:01 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : x(0), y(0)
{ }

Point::Point( const float x, const float y ) : x(x), y(y)
{ }

Point::Point( const Point &P ) : x(P.x), y(P.y)
{ }

Point   &Point::operator= ( const Point &P )
{
    if (this != &P)
    {
        Point temp(P);
        swapPoint(*this, temp);
    }
    return (*this);
}

Point::~Point( void )
{
}

void    Point::swapPoint( Point &a, Point &b )
{
    Point tmp;

    tmp = a;
    a = b;
    b = tmp;
}

const   Fixed   &Point::getX( void ) const
{
    return (x);
}

const   Fixed   &Point::getY( void ) const
{
    return (y);
}