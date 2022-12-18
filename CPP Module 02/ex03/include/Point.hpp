/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:29:23 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/12 17:13:52 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

typedef struct vec
{
    Fixed x;
    Fixed y;
} m_vec;

class Point
{
    public:
        Point( void );
        Point( const float x, const float y );
        Point( const Point & );
        Point   &operator= ( const Point & );
        ~Point( void );
        void    swapPoint( Point &a, Point &b );
        const Fixed &getX( void ) const;
        const Fixed &getY( void ) const;
    private:
        const Fixed x;
        const Fixed y;
};

bool    bsp( Point const a, Point const b, Point const c, Point const point );

#endif