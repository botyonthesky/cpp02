/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:49:13 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/18 11:46:47 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed()
{
    _value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    _value = (nb << _fraction_bits);
}

Fixed::Fixed(const float nb_f)
{
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(nb_f * (1 << _fraction_bits));

}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
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
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        _value = other.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits(void) const
{
    return (_value);
}

void    Fixed::setRawBits(int const raw)
{
    _value = raw;
}