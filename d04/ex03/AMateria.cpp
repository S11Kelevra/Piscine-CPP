// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AMateria.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/11 15:33:29 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/11 15:33:31 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(void): type_(""), xp_(0) {
}

AMateria::AMateria(std::string const & type): type_(type), xp_(0) {	
}

AMateria::AMateria(AMateria const & cpy)
{
	*this = cpy;
}

AMateria::~AMateria() {}

AMateria &	AMateria::operator=(AMateria const & rhs)
{
	xp_ = rhs.getXP();
	return (*this);
}

std::string const &	AMateria::getType() const
{
	return (type_);
}

unsigned int		AMateria::getXP() const
{
	return (xp_);
}

void				AMateria::setXP()
{
	xp_ += 10;
}

void		AMateria::use(ICharacter& target)
{
	(void)target;
}