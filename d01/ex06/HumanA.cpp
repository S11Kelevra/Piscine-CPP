// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/06 18:56:40 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/06 20:02:20 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string str1, Weapon& type): name(str1), wp(type)
{
}

HumanA::~HumanA(void) {}

void	HumanA::attack(void)
{
	std::cout << name + " attacks with his " + wp.getType() << std::endl;
}
