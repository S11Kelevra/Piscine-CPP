// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ice.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/11 15:33:51 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/11 15:33:52 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Ice.hpp"
#include <iostream>

Ice::Ice(void): AMateria("ice") {}

Ice::Ice(std::string const & type): AMateria("ice")
{
	(void)type;
}

Ice::Ice(Ice const & cpy): AMateria(cpy) {}

Ice::~Ice() {}

Ice*	Ice::clone(void) const
{
	Ice *	newice = new Ice("ice");

	return (newice);
}

void		Ice::use(ICharacter& target)
{
	setXP();
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}