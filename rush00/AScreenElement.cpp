// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AScreenElement.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 16:45:24 by hlecuyer          #+#    #+#             //
//   Updated: 2015/01/10 16:45:43 by hlecuyer         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AScreenElement.hpp"
#include <ncurses.h>
#include <iostream>

AScreenElement::AScreenElement( void ) : _x(10), _y(10), _form(' ') {}

AScreenElement::AScreenElement(int x, int y) : _x(x), _y(y),  _form(' ') {}

AScreenElement::AScreenElement(AScreenElement const & src) : _x(src._x), _y(src._y), _form(src._form) {}

AScreenElement::~AScreenElement( void ) {}

AScreenElement const &	AScreenElement::operator=(AScreenElement const & rhs) {

	if (this != &rhs) {
		_form = rhs._form;
		_x = rhs._x;
		_y = rhs._y;
	}
	return *this;
}

int		AScreenElement::getX( void ) const {

	return this->_x;
}

int		AScreenElement::getY( void ) const {

	return this->_y;
}

void	AScreenElement::toPrint() {

	char	form[2] = {_form, 0};

	if (form[0] == 'Q')
	{
		attron(COLOR_PAIR(5));
	    mvprintw(this->_y, this->_x, form);
		attroff(COLOR_PAIR(5));
	}
	else if (form[0] == 'K')
	{
		attron(COLOR_PAIR(1));
	    mvprintw(this->_y, this->_x, form);
		attroff(COLOR_PAIR(1));
	}
	else if (form[0] == '}')
	{
		attron(COLOR_PAIR(4));
	    mvprintw(this->_y, this->_x, form);
		attroff(COLOR_PAIR(4));
	}
	else if (form[0] == 'o')
	{
		attron(COLOR_PAIR(2));
	    mvprintw(this->_y, this->_x, form);
		attroff(COLOR_PAIR(2));
	}
	else
	    mvprintw(this->_y, this->_x, form);
}

bool	AScreenElement::colision(AScreenElement*& elem) {

	return (_x >= elem->getX() && _y == elem->getY());
}
