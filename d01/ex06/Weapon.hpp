// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/06 18:49:56 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/06 19:38:00 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {

public:

	Weapon(void);
	Weapon(std::string str);
	~Weapon(void);

	std::string const &	getType();
	void				setType(std::string str);

	std::string		type;
};

#endif
