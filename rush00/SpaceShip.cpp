// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SpaceShip.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 18:00:22 by hlecuyer          #+#    #+#             //
//   Updated: 2015/01/10 18:00:22 by hlecuyer         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SpaceShip.hpp"
#include "Window.hpp"
#include <ncurses.h>

SpaceShip::SpaceShip( void ) : AScreenElement(){
	_form = '}';
	life = 3;
}

SpaceShip::SpaceShip(int x, int y) : AScreenElement(x, y){
	_form = '}';
	life = 3;
}

SpaceShip::SpaceShip(SpaceShip const & src) : AScreenElement(src.getX(), src.getY()){

}


SpaceShip::~SpaceShip( void ) {

}

bool 	SpaceShip::move( int timeFrameCount) {
	if (timeFrameCount == 0)
		return 1;
	return 0;
}

void 	SpaceShip::move( int const input, int timeFrameCount) {
	if (timeFrameCount){
		if (input == KEY_UP && _y > (WINSTARTY + 1))
			_y--;
		else if (input == KEY_DOWN && _y < (WINSTARTY + WINHEIGHT - 2))
			_y++;
	}
}