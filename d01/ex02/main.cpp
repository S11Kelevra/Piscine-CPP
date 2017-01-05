// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/06 17:24:55 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/06 19:33:18 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>
#include <ctime>

int		main()
{
	Zombie			zomb1;
	Zombie			zomb2;
	Zombie			zomb3;
	ZombieEvent		event;

	std::srand(std::time(0));
	std::cout << std::endl << "---> 3 zombies on the stack created." << std::endl << "---> make them announce:" << std::endl;
	zomb1.announce();
	zomb2.announce();
	zomb3.announce();

	std::cout << std::endl << "---> set type for zombies and create 3 random zombies on the heap:" << std::endl;
	event.setZombieType("Boomer");
	Zombie*		newzomb1 = event.randomChump();
	Zombie*		newzomb2 = event.randomChump();
	std::cout << std::endl << "---> set different type for the last one:" << std::endl;
	event.setZombieType("Hunter");
	Zombie*		newzomb3 = event.randomChump();

	std::cout << std::endl << "---> kill zombies on the heap:" << std::endl;
	delete newzomb1;
	delete newzomb2;
	delete newzomb3;

	std::cout << std::endl << "---> zombies on the stack dies :" << std::endl;
	return 0;
}
