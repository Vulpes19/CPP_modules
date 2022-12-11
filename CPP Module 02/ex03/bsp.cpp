/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:32:59 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/11 20:55:27 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float crossProduct( m_vec vec1, m_vec vec2 )
{
    return ((vec1.x * vec2.y) - ( vec1.y * vec2.x));
}

bool    bsp( Point const a, Point const b, Point const c, Point const point )
{
    //vectors AB and AC
    m_vec AB = {b.getX().toFloat() - a.getX().toFloat(), b.getY().toFloat() - a.getY().toFloat()};
    m_vec AC = {c.getX().toFloat() - a.getX().toFloat(), c.getY().toFloat() - a.getY().toFloat()};
    //vector AP
    m_vec AP = {point.getX().toFloat() - a.getX().toFloat(), point.getY().toFloat() - a.getY().toFloat()};

    float cross = crossProduct( AB, AC );
    float p_cross = crossProduct( AC, AP );

    //if the cross product of PB and PC has the same sign as the cross product of AC and AB
    //the point is on the same side of the edge of AB as the rest of the triangle
    if ( p_cross != 0 && p_cross > 0 && cross > 0 )
    {
        std::cout << "pss" << std::endl;
        m_vec CA = {a.getX().toFloat() - c.getX().toFloat(), a.getY().toFloat() - c.getY().toFloat()};
        m_vec CB = {b.getX().toFloat() - c.getX().toFloat(), b.getY().toFloat() - c.getY().toFloat()};

        float c_cross = crossProduct( CA, CB );
        // If the cross product of CA and CB has the same sign as the cross product of AB and AC,
        // then the point is on the same side of the edge CA as the rest of the triangle.
        if ( c_cross != 0 && c_cross > 0 && cross > 0  )
            return (true);
    }
    return (false);
}
