// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   B.cpp                                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/15 19:23:27 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/15 19:23:27 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "B.hpp"

B::B(void){

}

B::B(B const & src){
	*this = src;
}
	
B::~B(void){

}

B & B::operator=(B const & rhs){
	if (this != &rhs)
		*this = rhs;
	return *this;
}