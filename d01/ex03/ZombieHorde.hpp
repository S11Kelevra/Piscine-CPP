// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/06 19:39:20 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/06 20:03:01 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include "Zombie.hpp"
#include <iostream>

class ZombieHorde {

public:

	ZombieHorde(int n);
	~ZombieHorde(void);

	void	announce(void);

	Zombie* 	horde;
	int			number;
};

#endif
