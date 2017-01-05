// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   A.hpp                                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/15 19:23:17 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/15 19:23:17 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef A_HPP
# define A_HPP

#include "Base.hpp"

class A : public Base
{
public:
	
	A(void);
	A(A const & src);
	~A(void);

	A & operator=(A const & rhs);
};

#endif