/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:08:47 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/12 11:33:40 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <string>
#include <iostream>
#include "Fixed.hpp"

class Point
{
private:
    const Fixed _x;
    const Fixed _y;
public:
    Point();
    Point(const float a, const float b);
    Point(const Point& other);
    Point& operator=(const Point& other);
    ~Point();
    
    const Fixed     get_xPoint(void) const;
    const Fixed     get_yPoint(void) const;



    void            display_coor(const Point coor) const;
};


bool    bsp( Point const a, Point const b, Point const c, Point const point);





#endif