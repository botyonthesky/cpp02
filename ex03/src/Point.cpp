/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:09:28 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/18 10:10:41 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"
#include "../include/Fixed.hpp"


Point::Point() : _x(0.0f), _y(0.0f)
{
    // std::cout << "Point Constructor" << std::endl;
}

Point::Point(const float a, const float b) : _x(a), _y(b)
{

    // std::cout << "Float init constructor" << std::endl;
}


Point::Point(const Point& other) : _x(other.get_xPoint()), _y(other.get_yPoint())
{
    // std::cout << "Copy constructor" << std::endl;
}

Point&  Point::operator=(const Point&)
{   
    // std::cout << "Copy assignment constructor" << std::endl;
    return (*this);
}

Point::~Point()
{
    // std::cout << "Point destructor" << std::endl;
}

const Fixed   Point::get_xPoint(void) const
{
    return (_x);
}
 
const Fixed   Point::get_yPoint(void) const
{
    return (_y);
}


void    Point::display_coor(const Point coor) const
{
    std::cout << "x pos : " << coor.get_xPoint() << std::endl
    << "y pos : " << coor.get_yPoint() << std::endl;
}