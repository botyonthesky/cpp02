/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:42:52 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/05 09:14:02 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed()
{
    _value = 0;
}

Fixed::Fixed(const int nb)
{
    _value = (nb * (1 << _fraction_bits));
}

Fixed::Fixed(const float nb_f)
{
    _value = roundf(nb_f * (1 << _fraction_bits));
}

Fixed::Fixed(const Fixed& other)
{
    *this = other;
}

std::ostream& operator<<(std::ostream&out, Fixed const &Fixed)
{
    out << Fixed.toFloat();
    return (out);
    
}
float   Fixed::toFloat(void) const
{
    float result;
    result = static_cast<float>(getRawBits()) / (1 << _fraction_bits);
    return (result);
}

int     Fixed::toInt(void) const
{
    int result;
    result = static_cast<int>(getRawBits() >> _fraction_bits);
    return (result);
}


Fixed& Fixed::operator=(const Fixed& other)
{
    if (this == &other)
        return (*this);
    _value = other.getRawBits();
    return (*this);
}

bool Fixed::operator<(const Fixed& other)
{
    if (this->getRawBits() < other.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator>(const Fixed& other)
{
    if (this->getRawBits() > other.getRawBits())
        return (true);
    return (false);
}



bool Fixed::operator!=(const Fixed& other)
{
    if (this->getRawBits() != other.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator==(const Fixed& other)
{
    if (this->getRawBits() == other.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator<=(const Fixed& other)
{
    if (this->getRawBits() <= other.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator>=(const Fixed& other)
{
    if (this->getRawBits() >= other.getRawBits())
        return (true);
    return (false);
}

Fixed& Fixed::operator++(void)
{
    this->setRawBits(this->getRawBits() +  1);
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp;
    tmp = *this;
    this->_value += 1;
    return (tmp);
}

Fixed& Fixed::operator--(void)
{
    this->_value -= 1;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp;
    tmp = *this;
    this->_value -= 1;
    return (tmp);
}

Fixed Fixed::operator+(const Fixed& other)
{
    Fixed result;
    result.setRawBits(this->getRawBits() + other.getRawBits());
    return (result);
}

Fixed Fixed::operator-(const Fixed& other)
{
    Fixed result;
    result.setRawBits(this->getRawBits() - other.getRawBits());
    return (result);
}

Fixed Fixed::operator*(const Fixed& other)
{
    Fixed result;
    int64_t raw_bits;
    
    raw_bits = static_cast<int64_t>(this->getRawBits()) * static_cast<int64_t>(other.getRawBits());
    raw_bits /= 1 << _fraction_bits;
    result.setRawBits(raw_bits);
    return (result);
}

Fixed Fixed::operator/(const Fixed& other)
{
    Fixed result;
    int64_t x;
    int64_t raw_bits;
    
    x = static_cast<int64_t>(this->getRawBits()) * (1 << _fraction_bits);
    raw_bits = x / other.getRawBits();
    result.setRawBits(raw_bits);
    return (result);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (b);
    return (a);
}

Fixed& max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (b);
    return (a);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (b);
    return (a);
}

Fixed& min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (b);
    return (a);
}

Fixed::~Fixed()
{
    
}

int     Fixed::getRawBits(void) const
{
    return (_value);
}

void    Fixed::setRawBits(int const raw)
{
    _value = raw;
}