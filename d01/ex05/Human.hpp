// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/06 19:39:20 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/06 20:03:01 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_H
# define HUMAN_H

#include "Brain.hpp"
#include <iostream>

class Human {

public:

	Human(void);
	~Human(void);

	Brain const &	getBrain(void);
	std::string		identify(void);

	Brain const own;
};

#endif
