/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:32:59 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/12 18:38:43 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed calTriangleArea( Point const a, Point const b, Point const c )
{
    Fixed area = ((a.getX() * b.getY()) + (a.getY() * c.getX()) + (b.getX() * c.getY())) - ((c.getX() * b.getY()) + (c.getY() * a.getX()) + (b.getX() * a.getY()));
    return (std::abs(area.toFloat()) / 2);
}

bool    bsp( Point const a, Point const b, Point const c, Point const point )
{
    Fixed triangleArea, area1, area2, area3;

    triangleArea = calTriangleArea(a, b , c);
    area1 = calTriangleArea(point, a, b);
    area2 = calTriangleArea(point, b, c);
    area3 = calTriangleArea(point, c, a);
    
    // std::cout << "triangle area: " << t_a << std::endl;
    // std::cout << "area 1: " << a1 << std::endl;
    // std::cout << "area 2: " << a2 << std::endl;
    // std::cout << "area 3: " << a3 << std::endl;
    // std::cout << a1 + a2 + a3 << std::endl;
    if ((area1 + area2 + area3) == triangleArea)
        return (true);
    else
        return (false);
}
