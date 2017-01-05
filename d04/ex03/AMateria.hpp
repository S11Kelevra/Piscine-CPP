// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AMateria.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/11 15:33:14 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/11 15:33:16 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class AMateria
{
private:

	std::string		type_;
	unsigned int 	xp_;

public:

	AMateria(void);
	AMateria(std::string const & type);
	AMateria(AMateria const & cpy);
	virtual ~AMateria();
	AMateria &	operator=(AMateria const & rhs);

	std::string const &	getType() const;
	unsigned int		getXP() const;
	void				setXP();
	
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif