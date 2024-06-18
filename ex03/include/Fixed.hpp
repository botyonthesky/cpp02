/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:07:13 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/12 11:57:26 by tmaillar         ###   ########.fr       */
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
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;
    bool operator>(const Fixed& other);
    bool operator<(const Fixed& other);
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;
    Fixed& operator--(void);
    Fixed& operator++(void);
    Fixed operator++(int);
    Fixed operator--(int);
    static const Fixed& max(const Fixed &a, const Fixed &b);
    static Fixed& max(Fixed &a, Fixed &b);
    static const Fixed& min(const Fixed &a, const Fixed &b);
    static Fixed& min(Fixed &a, Fixed &b);

    ~Fixed();
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

};

std::ostream& operator<<(std::ostream&out, Fixed const &Fixed);

#endif