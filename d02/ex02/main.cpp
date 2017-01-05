// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ndauteui <ndauteui@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/08 20:30:13 by ndauteui          #+#    #+#             //
//   Updated: 2015/01/08 20:41:02 by ndauteui         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Fixed.hpp"

int 	main( void )
{
	Fixed a(5);
	Fixed b(2);

	std::cout << "A = " << a << std::endl;
	std::cout << "B = " << b << std::endl;
	std::cout << "A + B = " << (a + b) << std::endl;
	std::cout << "A - B = " << (a - b) << std::endl;
	std::cout << "A * B = " << (a * b) << std::endl;
	std::cout << "A / B = " << (a / b) << std::endl;
	if (a > b)
		std::cout << "A > B" << std::endl;
	if (a >= b)
		std::cout << "A >= B" << std::endl;
	if (b < a)
		std::cout << "B < A" << std::endl;
	if (b <= a)
		std::cout << "B <= A" << std::endl;
	if (b == a)
		std::cout << "B == A" << std::endl;
	if (b != a)
		std::cout << "B != A" << std::endl;

    Fixed c;
    Fixed const d( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << c << std::endl;
	std::cout << ++c << std::endl;
	std::cout << c << std::endl;
	std::cout << c++ << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << Fixed::max( c, d ) << std::endl;

	return (0);
}
