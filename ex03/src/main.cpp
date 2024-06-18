/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:08:10 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/18 12:58:28 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include "../include/Point.hpp"

int main()
{
    Point const tri_a(0, 0);
    Point const tri_b(30, 0);
    Point const tri_c(15, 15);

    std::cout << "The triangle of point A B C, with each coordinate point is : " << std::endl;

    std::cout << "a.x = " << tri_a.get_xPoint() << " & a.y = " << tri_a.get_yPoint() << std::endl;
    std::cout << "b.x = " << tri_b.get_xPoint() << " & b.y = " << tri_b.get_yPoint() << std::endl;
    std::cout << "c.x = " << tri_c.get_xPoint() << " & c.y = " << tri_c.get_yPoint() << std::endl;
    

    Point const inside_point(15, 10);
    Point const outside_point(20, 20);
    Point const edge_point(10, 0);
    
    std::cout << "the coordinate point with x = " << inside_point.get_xPoint()
        << " and y = " << inside_point.get_yPoint();
    if (bsp(tri_a, tri_b, tri_c, inside_point) == true)
        std::cout <<  " is inside the triangle" << std::endl;
    else
        std::cout << " is outside the triangle" << std::endl;

    std::cout << "the coordinate point with x = " << outside_point.get_xPoint()
        << " and y = " << outside_point.get_yPoint();
    if (bsp(tri_a, tri_b, tri_c, outside_point) == true)
        std::cout << " is inside the triangle" << std::endl;
    else
        std::cout << " is outside the triangle" << std::endl;

    std::cout << "the coordinate point with x = " << edge_point.get_xPoint()
        << " and y = " << edge_point.get_yPoint();
    if (bsp(tri_a, tri_b, tri_c, edge_point) == true)
        std::cout << " is inside the triangle" << std::endl;
    else
        std::cout << " is outside the triangle" << std::endl;
        
    return (0);
}