/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:42:57 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/05 09:34:11 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int main( void ) 
{
    // Fixed a;
    // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << Fixed::max( a, b ) << std::endl;

    Fixed a(42);
    Fixed const b(84);
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl << std::endl;
    std::cout << "[ COMPARAISON OPERATOR ]"  << std::endl << std::endl;
    std::cout << "if a < b, diplay a, else if display a > b, else display equal : ";
    if (a < b)
        std::cout << a << std::endl << std::endl;
    else if (a > b)
        std::cout << "a > b" << std::endl << std::endl;
    else
        std::cout << "equal" << std::endl << std::endl;
    std::cout << "if a <= b, diplay a, else display a >= b : ";
    if (a <= b)
        std::cout << a << std::endl << std::endl;
    else
        std::cout << "a >= b" << std::endl << std::endl;
    std::cout << "if a > b, diplay a, else if display a < b, else display equal : ";
    if (a > b)
        std::cout << a << std::endl << std::endl;
    else if (a < b)
        std::cout << "a < b" << std::endl << std::endl;
    else
        std::cout << "equal" << std::endl << std::endl;
    std::cout << "if a >= b, diplay a, else display a <= b : ";
    if (a >= b)
        std::cout << a << std::endl << std::endl;
    else
        std::cout << "a <= b" << std::endl << std::endl;
    std::cout << "if a == b, diplay equal, else display not equal : ";
    if (a == b)
        std::cout << "equal" << std::endl << std::endl;
    else
        std::cout << "not equal" << std::endl << std::endl;
    std::cout << "if a != b, diplay not equal, else display equal : ";
    if (a != b)
        std::cout << "not equal" << std::endl << std::endl;
    else
        std::cout << "equal" << std::endl << std::endl;
    std::cout << "[ OPERATION ]" << std::endl << std::endl;
    std::cout << "addition of a " << a << " and b " << b << " is " << std::endl;
    std::cout << a + b << std::endl; 
    std::cout << "soustraction of a " << a << " and b " << b << " is " << std::endl;
    std::cout << a - b << std::endl; 
    std::cout << "multiplication of a " << a << " and b " << b << " is " << std::endl;
    std::cout << a * b << std::endl; 
    std::cout << "division of a " << a << " and b " << b << " is " << std::endl;
    std::cout << a / b << std::endl << std::endl;
    std::cout << "[ INCREMENTATION ] " << std::endl << std::endl;
    std::cout << a << std::endl;
    std::cout << "pre increment : " << std::endl;
    std::cout << ++a << std::endl;
    std::cout << "post increment : " << std::endl;
    std::cout << a++ << std::endl;
    std::cout << "After post increment : " << std::endl;
    std::cout << a << std::endl  << std::endl;
    std::cout << "[ DECREMENTATION ] " << std::endl << std::endl;
    std::cout << a << std::endl;
    std::cout << "pre increment : " << std::endl;
    std::cout << --a << std::endl;
    std::cout << "post increment : " << std::endl;
    std::cout << a-- << std::endl;
    std::cout << "After post decrement : " << std::endl;
    std::cout << a << std::endl  << std::endl;
    
    std::cout << "[ WHO'S MAX, WHO'S MIN ] " << std::endl << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl << std::endl;
    std::cout << "Display the highest value : ";
    std::cout << Fixed::max( a, b ) << std::endl << std::endl;
    std::cout << "Display the lowest value : ";
    std::cout << Fixed::min( a, b ) << std::endl;
    return (0);
}