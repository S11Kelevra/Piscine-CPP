// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/07 14:51:30 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/07 16:38:18 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_H
# define FIXED_H

class	Fixed {

public:

	Fixed(void);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed &		operator=(Fixed const & rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:

	int					_raw;
	static int const	_bit = 8;

};

#endif
