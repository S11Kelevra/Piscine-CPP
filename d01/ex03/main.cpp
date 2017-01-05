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

#include "ZombieHorde.hpp"
#include <iostream>
#include <ctime>

int		main()
{
	std::srand(std::time(0));
	ZombieHorde		horde(9);
	
	horde.announce();
	return 0;
}
