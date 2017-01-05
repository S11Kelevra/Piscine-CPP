// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   A.cpp                                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/15 19:23:23 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/15 19:23:24 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "A.hpp"

A::A(void){

}

A::A(A const & src){
	*this = src;
}
	
A::~A(void){

}

A & A::operator=(A const & rhs){
	if (this != &rhs)
		*this = rhs;
	return *this;
}