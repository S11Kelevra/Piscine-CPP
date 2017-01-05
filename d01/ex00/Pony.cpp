// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/06 17:17:39 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/06 18:14:13 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Pony.hpp"

Pony::Pony(void) {

	std::cout << "A pony is born !" << std::endl;
	return;
}

Pony::~Pony(void) {

	std::cout << "A pony is dead :(" << std::endl;
	return;
}
