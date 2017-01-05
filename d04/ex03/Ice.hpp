// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ice.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/11 15:33:42 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/11 15:33:43 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Ice: public AMateria
{

public:
	Ice(void);
	Ice(std::string const & type);
	Ice(Ice const &);
	~Ice();
	using AMateria::operator=;

	Ice*		clone(void) const;
	void		use(ICharacter& target);
};

#endif
