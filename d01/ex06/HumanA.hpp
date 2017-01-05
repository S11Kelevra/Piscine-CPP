// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/06 19:39:20 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/06 20:03:01 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"
#include <iostream>

class HumanA {

public:

	HumanA(std::string str1, Weapon& type);
	~HumanA(void);

	void	attack(void);

	std::string		name;
	Weapon&			wp;
};

#endif
