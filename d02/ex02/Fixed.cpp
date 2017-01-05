// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/07 14:59:00 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/07 22:20:49 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void): _raw(0) {}

Fixed::Fixed(int const n)
{
	setRawBits(n << _bit);
}

Fixed::Fixed(float const n)
{
	setRawBits(roundf(n * (1 << _bit)));
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed::~Fixed(void) {}

int		Fixed::getRawBits(void) const
{
	return this->_raw;
}

void    Fixed::setRawBits(int const raw)
{
	this->_raw = raw;
}

int		Fixed::toInt(void) const
{
	return (getRawBits() >> this->_bit);
}

float	Fixed::toFloat(void) const
{
	float	n;

	n = getRawBits();
	return (n / (1 << this->_bit));
}

Fixed &		Fixed::operator=(Fixed const & rhs)
{
	if (this != &rhs)
		this->_raw = rhs.getRawBits();

	return *this;
}

bool	Fixed::operator>(Fixed const & rhs)
{
	return (this->_raw > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const & rhs)
{
    return (this->_raw < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const & rhs)
{
    return (this->_raw >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const & rhs)
{
    return (this->_raw <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const & rhs)
{
    return (this->_raw == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const & rhs)
{
    return (this->_raw != rhs.getRawBits());
}

Fixed	Fixed::operator+(Fixed const & rhs)
{
	Fixed	ret;

	ret.setRawBits(this->_raw + rhs._raw);
	return (ret);
}

Fixed 	Fixed::operator-(Fixed const & rhs)
{
    Fixed   ret;

    ret.setRawBits(this->_raw - rhs._raw);
    return (ret);
}

Fixed 	Fixed::operator*(Fixed const & rhs)
{
    Fixed   ret;

    ret._raw = (this->_raw * rhs._raw) >> this->_bit;
    return (ret);
}

Fixed 	Fixed::operator/(Fixed const & rhs)
{
    Fixed   ret;

    ret._raw = (this->_raw << this->_bit) / rhs._raw;
    return (ret);
}

Fixed &		Fixed::operator++(void)
{
	this->_raw++;
	return (*this);
}

Fixed		Fixed::operator++(int)
{
	Fixed	newfix;

	newfix = *this;
	this->_raw++;
	return (newfix);
}

Fixed &		Fixed::operator--(void)
{
	this->_raw--;
	return (*this);
}

Fixed		Fixed::operator--(int)
{
	Fixed	newfix;

	newfix = *this;
	this->_raw++;
	return (newfix);
}

Fixed & 			Fixed::min(Fixed & lhs, Fixed & rhs)
{
	if (lhs.getRawBits() > rhs.getRawBits())
		return (rhs);
	return (lhs);
}

Fixed & 			Fixed::max(Fixed & lhs, Fixed & rhs)
{
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	return (rhs);
}

const Fixed & 	Fixed::min(Fixed const & lhs, Fixed const & rhs)
{
	if (lhs.getRawBits() > rhs.getRawBits())
		return (rhs);
	return (lhs);
}

const Fixed & 	Fixed::max(Fixed const & lhs, Fixed const & rhs)
{
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	return (rhs);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
