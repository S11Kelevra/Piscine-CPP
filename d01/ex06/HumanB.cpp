// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/06 18:56:40 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/06 20:02:20 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string str1): name(str1) {}

HumanB::~HumanB(void) {}

void	HumanB::attack(void)
{
	std::cout << name + " attacks with his " + wp->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& newwp)
{
	wp = &newwp;
}
