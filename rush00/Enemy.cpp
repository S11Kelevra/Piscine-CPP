// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 17:41:26 by hlecuyer          #+#    #+#             //
//   Updated: 2015/01/10 17:41:26 by hlecuyer         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Enemy.hpp"
#include <ncurses.h>

Enemy::Enemy( void ) : AScreenElement() {

	char	form[2] = {'K', 'Q'};
	_form = form[rand() % 2];
}

Enemy::Enemy(int x, int y) : AScreenElement(x, y){

	char	form[2] = {'K', 'Q'};
	_form = form[rand() % 2];
}

Enemy::Enemy(Enemy const & src) : AScreenElement(src.getX(), src.getY()){

}


Enemy::~Enemy( void ) {

}

bool 	Enemy::move( int timeFrameCount ) {
	if (_x >= 11)
	{
		if (timeFrameCount % 2 == 0){ 
			_x--;
		}
		return TRUE;
	}
	else
		return FALSE;
}
