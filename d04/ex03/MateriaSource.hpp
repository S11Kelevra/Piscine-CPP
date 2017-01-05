// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   MateriaSource.hpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/11 15:34:42 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/11 15:34:43 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource
{
private:
	AMateria**		_tabm;

public:
	
	MateriaSource(void);
	MateriaSource(MateriaSource const & cpy);
	~MateriaSource() {}
	MateriaSource & operator=(MateriaSource const & rhs);

	void 		learnMateria(AMateria*);
	AMateria* 	createMateria(std::string const & type);
};

#endif
