// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cure.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/11 15:34:07 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/11 15:34:08 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void): AMateria("cure") {}

Cure::Cure(std::string const & type): AMateria("cure")
{
	(void)type;
}

Cure::Cure(Cure const & cpy): AMateria(cpy) {}

Cure::~Cure() {}

Cure*	Cure::clone(void) const
{
	Cure *	newcure = new Cure("cure");

	return (newcure);
}

void		Cure::use(ICharacter& target)
{
	setXP();
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}