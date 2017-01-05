// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   C.cpp                                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/15 19:23:30 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/15 19:23:30 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "C.hpp"

C::C(void){

}

C::C(C const & src){
	*this = src;
}
	
C::~C(void){

}

C & C::operator=(C const & rhs){
	if (this != &rhs)
		*this = rhs;
	return *this;
}