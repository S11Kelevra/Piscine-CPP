// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/06 18:56:40 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/06 20:02:20 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"
#include <iostream>

ZombieHorde::ZombieHorde(int n)
{
	std::string		tab[] = {"Harry", "Niall", "Zayn", "Louis", "Liam"};
	horde = new Zombie[n];

	number = n;
	for (int i = 0; i < number; i++)
		horde[i].name = tab[rand() % 5];
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] horde;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < number; i++)
		horde[i].announce();
}
