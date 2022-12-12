/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:32:59 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/12 17:20:08 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed calTriangleArea( Point const a, Point const b, Point const c )
{
    Fixed area = (a.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (a.getY() - c.getY());
    return (std::abs(area.toFloat()) / 2);
}

bool    bsp( Point const a, Point const b, Point const c, Point const point )
{
    Fixed t_a, a1, a2, a3;

    t_a = calTriangleArea(a, b , c);
    a1 = calTriangleArea(point, a, b);
    a2 = calTriangleArea(point, b, c);
    a3 = calTriangleArea(point, c, a);
    
    std::cout << "triangle area: " << t_a << std::endl;
    std::cout << "area 1: " << a1 << std::endl;
    std::cout << "area 2: " << a2 << std::endl;
    std::cout << "area 3: " << a3 << std::endl;
    std::cout << a1 + a2 + a3 << std::endl;
    if ((a1 + a2 + a3) == t_a)
        return (true);
    else
        return (false);
}
