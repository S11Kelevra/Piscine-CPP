// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   EnemyBullet.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 18:02:34 by hlecuyer          #+#    #+#             //
//   Updated: 2015/01/10 18:02:34 by hlecuyer         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "EnemyBullet.hpp"
#include "Window.hpp"

EnemyBullet::EnemyBullet( void ) : AScreenElement() {
	_form = 'o';
}

EnemyBullet::EnemyBullet(int x, int y) : AScreenElement(x, y) {
	_form = 'o';
}

EnemyBullet::EnemyBullet(EnemyBullet const & src) : AScreenElement(src.getX(), src.getY()) {

}

EnemyBullet::~EnemyBullet( void ) {

}

bool 	EnemyBullet::move( int timeFrameCount) {

	if (_x < WINSTARTX + 3)
			return FALSE;
	if (timeFrameCount % 1 == 0){
		_x--;
	} 
	return TRUE;
}
