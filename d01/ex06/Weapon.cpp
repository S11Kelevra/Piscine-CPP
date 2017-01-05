// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/06 18:56:40 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/06 19:36:40 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(void): type("none") {}

Weapon::Weapon(std::string str)
{
	type = str;
}

Weapon::~Weapon(void) {}

std::string const &	Weapon::getType()
{
	return (type);
}

void				Weapon::setType(std::string str)
{
	type = str;
}
