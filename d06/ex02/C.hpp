// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   C.hpp                                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/15 19:23:35 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/15 19:23:35 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef C_HPP
# define C_HPP

#include "Base.hpp"

class C : public Base
{
public:
	
	C(void);
	C(C const & src);
	~C(void);

	C & operator=(C const & rhs);
};

#endif