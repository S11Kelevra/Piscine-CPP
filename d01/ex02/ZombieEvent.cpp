// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/06 18:56:40 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/06 20:02:20 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"
#include <iostream>

ZombieEvent::ZombieEvent(void) {}

ZombieEvent::~ZombieEvent(void) {}

void		ZombieEvent::setZombieType(std::string newtype)
{
	ztype = newtype;
}

Zombie*		ZombieEvent::newZombie(std::string zname)
{
	Zombie*		zomb = new Zombie();

	zomb->name = zname;
	zomb->type = ztype;
	return (zomb);
}

Zombie*		ZombieEvent::randomChump(void)
{
	std::string		tab[] = {"Harry", "Niall", "Zayn", "Louis", "Liam"};
	Zombie* 		zomb = newZombie(tab[rand() % 5]);

	zomb->announce();
	return (zomb);
}
