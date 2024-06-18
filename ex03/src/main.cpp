/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:08:10 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/18 10:20:44 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include "../include/Point.hpp"

int main()
{
    Point const tri_a(0, 0);
    Point const tri_b(10, 30);
    Point const tri_c(tri_b);

    std::cout << "a.x = " << tri_a.get_xPoint() << " & a.y = " << tri_a.get_yPoint() << std::endl;
    std::cout << "c.x = " << tri_c.get_xPoint() << " & c.y = " << tri_c.get_yPoint() << std::endl;
    
    // std::cout << tri_c << std::endl;

    
    // Point const inside_point(5, 10);
    // Point const outside_point(20, 20);
    // Point const edge_point(10, 30);
    
    // if (bsp(tri_a, tri_b, tri_c, inside_point) == true)
    //     std::cout << "the point is inside the triangle" << std::endl;
    // else
    //     std::cout << "The point is outside the triangle" << std::endl;

    // if (bsp(tri_a, tri_b, tri_c, outside_point) == true)
    //     std::cout << "the point is inside the triangle" << std::endl;
    // else
    //     std::cout << "The point is outside the triangle" << std::endl;

    // if (bsp(tri_a, tri_b, tri_c, edge_point) == true)
    //     std::cout << "the point is inside the triangle" << std::endl;
    // else
    //     std::cout << "The point is outside the triangle" << std::endl;
        
    return (0);
}