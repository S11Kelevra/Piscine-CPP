// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/06 18:56:40 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/06 19:36:40 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void): name("Bob"), type("Infected")
{
	std::cout << "A zombie is created." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "A zombie is dead." << std::endl;
}

void	Zombie::announce(void) {

	std::cout << "<" + name + " (" + type + ")> " + "Braiiiiiinnnnssss..." << std::endl;
	return;
}
