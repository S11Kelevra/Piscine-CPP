// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Base.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/15 19:23:12 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/15 19:23:13 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Base.hpp"

Base::Base(void){

}

Base::Base(Base const & src){
	*this = src;
}
	
Base::~Base(void){

}

Base & Base::operator=(Base const & rhs){
	if (this != &rhs)
		*this = rhs;
	return *this;
}