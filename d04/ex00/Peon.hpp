// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/09 13:26:49 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/09 13:26:50 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"
#include <iostream>

class Peon : public Victim
{
public:
	Peon();
	Peon(std::string name);
	Peon(Peon & src);
	virtual ~Peon();

	virtual void	getPolymorphed() const;
};

std::ostream &	operator<<(std::ostream & o, Peon const & rhs);

#endif