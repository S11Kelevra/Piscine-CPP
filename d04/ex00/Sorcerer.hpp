// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/09 13:25:25 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/09 13:25:26 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include "Victim.hpp"
#include <iostream>

class Sorcerer
{
public:
	Sorcerer();
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer & src);
	~Sorcerer();

	Sorcerer &	operator=(Sorcerer & rhs);	
	std::string	getName() const;
	std::string	getTitle() const;
	void	polymorph(Victim const &) const;

private:
	std::string	_name;
	std::string	_title;
};

std::ostream &	operator<<(std::ostream & o, Sorcerer const & rhs);

#endif