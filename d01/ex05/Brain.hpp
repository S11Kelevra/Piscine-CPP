// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/06 18:49:56 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/06 19:38:00 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain {

public:

	Brain(void);
	~Brain(void);

	std::string		identify(void) const;
};

#endif
