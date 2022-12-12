/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:39:38 by abaioumy          #+#    #+#             */
/*   Updated: 2022/12/12 17:23:20 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
    Point p1(-2.0f, -1.0f);
    Point p2(0.0f, 2.0f);
    Point p3(2.0f, -1.0f);
    Point p( 0.0f, 2.01f);
    std::cout << bsp(p1, p2, p3, p) << std::endl;
//     bool bsp(Triangle triangle, Point point)
// {
//     // Compute the normal vector of the triangle
//     Point normal = {
//         (triangle.b.y - triangle.a.y) * (triangle.c.z - triangle.a.z) - (triangle.b.z - triangle.a.z) * (triangle.c.y - triangle.a.y),
//         (triangle.b.z - triangle.a.z) * (triangle.c.x - triangle.a.x) - (triangle.b.x - triangle.a.x) * (triangle.c.z - triangle.a.z),
//         (triangle.b.x - triangle.a.x) * (triangle.c.y - triangle.a.y) - (triangle.b.y - triangle.a.y) * (triangle.c.x - triangle.a.x)
//     };

//     // Compute the dot product between the normal vector and the vector from the
//     // triangle's first vertex to the point we are looking for
//     double dot = (point.x - triangle.a.x) * normal.x + (point.y - triangle.a.y) * normal.y + (point.z - triangle.a.z) * normal.z;

//     // If the dot product is positive, the point is in front of the triangle
//     // If the dot product is zero, the point is on the triangle
//     // If the dot product is negative, the point is behind the triangle
//     return dot >= 0;
// }

}