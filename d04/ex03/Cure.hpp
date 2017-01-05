// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cure.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/11 15:34:01 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/11 15:34:02 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Cure: public AMateria
{

public:
	Cure(void);
	Cure(std::string const & type);
	Cure(Cure const &);
	~Cure();
	using AMateria::operator=;

	Cure*		clone(void) const;
	void		use(ICharacter& target);
};

#endif
