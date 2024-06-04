/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:49:19 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/04 13:10:21 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
private:
    int     _value;
    static const int _fraction_bits = 8;
public:
    Fixed();
    Fixed(const Fixed& other);
    Fixed(const int nb);
    Fixed(const float nb_f);
    Fixed& operator=(const Fixed& other);
    ~Fixed();
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

};

std::ostream& operator<<(std::ostream&out, Fixed const &Fixed);

#endif