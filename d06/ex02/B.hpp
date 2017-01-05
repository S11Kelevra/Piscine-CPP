// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   B.hpp                                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/15 19:23:39 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/15 19:23:39 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef B_HPP
# define B_HPP

#include "Base.hpp"

class B : public Base
{
public:
	
	B(void);
	B(B const & src);
	~B(void);

	B & operator=(B const & rhs);
};

#endif