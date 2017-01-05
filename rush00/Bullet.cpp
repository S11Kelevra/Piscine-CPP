// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bullet.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 18:02:34 by hlecuyer          #+#    #+#             //
//   Updated: 2015/01/10 18:02:34 by hlecuyer         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bullet.hpp"
#include "Window.hpp"

Bullet::Bullet( void ) : AScreenElement() {
	_form = '-';
}

Bullet::Bullet(int x, int y) : AScreenElement(x, y) {
	_form = '-';
}

Bullet::Bullet(Bullet const & src) : AScreenElement(src.getX(), src.getY()) {

}

Bullet::~Bullet( void ) {

}

bool 	Bullet::move( int timeFrameCount) {

	if (_x > WINWIDTH + WINSTARTX - 3)
			return FALSE;
	if (timeFrameCount % 1 == 0){
		_x++;
	} 
	return TRUE;
}
