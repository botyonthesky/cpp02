/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 08:12:33 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/12 12:14:28 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include "../include/Point.hpp"



bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed result;
    Fixed result2;
    Fixed x1;
    Fixed y1;
    Fixed x2;
    Fixed y2;
    Fixed p;
    if (a.get_yPoint() != c.get_yPoint())
    {
        x1 = b.get_xPoint() - a.get_xPoint();
        y1 = b.get_yPoint() - a.get_yPoint();
        x2 = c.get_xPoint() - a.get_xPoint();
        y2 = c.get_yPoint() - a.get_yPoint();
        p = point.get_yPoint() - a.get_yPoint();
        result = (a.get_xPoint() * x1 + p * x2
        - point.get_xPoint() * y2) / (y1 * x2 - x1 * y2);
        result2 = (p - result * y1) / y2;
    }
    else
    {
        x1 = a.get_xPoint() - b.get_xPoint();
        y1 = a.get_yPoint() - b.get_yPoint();
        x2 = c.get_xPoint() - b.get_xPoint();
        y2 = c.get_yPoint() - b.get_yPoint();
        p = point.get_yPoint() - b.get_yPoint();
        result = (b.get_xPoint() * x1 + p * x2
        - point.get_xPoint() * y2) / (y1 * x2 - x1 * y2);
        result2 = (p - result * y1) / y2;
    }
    if ((result > 0 && result2 > 0) && (result + result2 < 1))
        return (true);
    return (false);
}