// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/08 14:47:45 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/08 23:39:53 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef NINJATRAP_H
# define NINJATRAP_H

#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap {

public:

	NinjaTrap(void);
    NinjaTrap(std::string const name);
	NinjaTrap(NinjaTrap const & src);
    ~NinjaTrap(void);

	NinjaTrap &	operator=(NinjaTrap const &);
	void	ninjaShoebox(FragTrap const & target);
	void	ninjaShoebox(ScavTrap const & target);
	void	ninjaShoebox(NinjaTrap const & target);
};

#endif
