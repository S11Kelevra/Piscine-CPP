// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/07 14:51:30 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/07 22:08:15 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class	Fixed {

public:

	Fixed(void);
	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed &		operator=(Fixed const & rhs);
	bool		operator>(Fixed const & rhs);
	bool		operator<(Fixed const & rhs);
	bool		operator>=(Fixed const & rhs);
	bool		operator<=(Fixed const & rhs);
	bool		operator==(Fixed const & rhs);
	bool		operator!=(Fixed const & rhs);
	Fixed 		operator+(Fixed const & rhs);
	Fixed 		operator-(Fixed const & rhs);
	Fixed 		operator*(Fixed const & rhs);
	Fixed 		operator/(Fixed const & rhs);
	Fixed &		operator++(void);
	Fixed		operator++(int);
	Fixed &		operator--(void);
	Fixed		operator--(int);

	int			getRawBits(void) const;
	void		setRawBits(int const raw);
	float		toFloat(void) const;
	int			toInt(void) const;

	static Fixed & 			min(Fixed & lhs, Fixed & rhs);
	static Fixed & 			max(Fixed & lhs, Fixed & rhs);
	static const Fixed & 	min(Fixed const & lhs, Fixed const & rhs);
	static const Fixed & 	max(Fixed const & lhs, Fixed const & rhs);

private:

	int					_raw;
	static int const	_bit = 8;

};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif
