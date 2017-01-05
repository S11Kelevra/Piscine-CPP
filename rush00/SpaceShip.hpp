// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SpaceShip.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 18:00:19 by hlecuyer          #+#    #+#             //
//   Updated: 2015/04/11 16:41:00 by hlecuyer         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "AScreenElement.hpp"

#ifndef SPACESHIP_HPP
# define SPACESHIP_HPP


class SpaceShip : public AScreenElement
{
public:
	SpaceShip(void);
	SpaceShip(int x, int y);
	SpaceShip(SpaceShip const & src);
	~SpaceShip();
	using AScreenElement::operator=;
	bool	move( int );
	void	move( int const, int const);
	char 	getForm();
	int		life;

private:
};

#endif
