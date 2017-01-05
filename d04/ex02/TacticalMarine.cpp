// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   TacticalMarine.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/11 17:06:34 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/11 18:21:42 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine( void )
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine( TacticalMarine const & src )
{
	std::cout << "Tactical Marine ready for battle" << std::endl;	
	(void)src;
}

TacticalMarine::~TacticalMarine( void )
{
	std::cout << "Aaargh ..." << std::endl;
}

void	TacticalMarine::battleCry( void ) const
{
	std::cout << "For the holy PLOT !" << std::endl;
}

void	TacticalMarine::rangedAttack( void ) const
{
	std::cout << "* attack with bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack( void ) const
{
	std::cout << "* attack with chainsword *" << std::endl;
}

ISpaceMarine *	TacticalMarine::clone( void ) const
{
	ISpaceMarine	*copy = new TacticalMarine(*this);

	return (copy);
}

TacticalMarine& TacticalMarine::operator=(TacticalMarine const & rhs)
{
	(void)rhs;
	return (*this);
}