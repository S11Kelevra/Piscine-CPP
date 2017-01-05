// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/06 19:39:20 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/06 20:03:01 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"
#include <iostream>

class HumanB {

public:

	HumanB(std::string str1);
	~HumanB(void);

	void	attack(void);
	void	setWeapon(Weapon& newwp);

	std::string		name;
	Weapon*			wp;
};

#endif
