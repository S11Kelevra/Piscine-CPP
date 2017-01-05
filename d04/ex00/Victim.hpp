// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/09 13:25:49 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/09 13:25:50 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
public:
	Victim();
	Victim(std::string name);
	Victim(Victim & src);
	virtual ~Victim();

	Victim &	operator=(Victim & rhs);	
	std::string	getName() const;
	virtual void	getPolymorphed() const;

protected:
	std::string	_name;
};

std::ostream &	operator<<(std::ostream & o, Victim const & rhs);

#endif