// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   IMateriaSource.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/11 15:36:17 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/11 15:36:18 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"
#include <iostream>

class IMateriaSource
{
	
public:
	virtual ~IMateriaSource() {}
	virtual void 		learnMateria(AMateria*) = 0;
	virtual AMateria* 	createMateria(std::string const & type) = 0;
};

#endif
