// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/08 14:47:45 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/08 23:39:53 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SUPERTRAP_H
# define SUPERTRAP_H

#include <iostream>

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

public:

	SuperTrap(void);
    SuperTrap(std::string const name);
	SuperTrap(SuperTrap const & src);
    ~SuperTrap(void);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	SuperTrap &	operator=(SuperTrap const &);
};

#endif
