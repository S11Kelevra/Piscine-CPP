// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Base.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/15 19:23:10 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/15 19:23:10 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BASE_HPP
# define BASE_HPP

class Base
{
public:

	Base(void);
	Base(Base const & src);
	virtual ~Base(void);

	Base & operator=(Base const & rhs);
};

#endif