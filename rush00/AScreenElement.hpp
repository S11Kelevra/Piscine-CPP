// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AScreenElement.hpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 16:45:09 by hlecuyer          #+#    #+#             //
//   Updated: 2015/01/10 16:46:00 by hlecuyer         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <ncurses.h>

#ifndef ASCREENELEMENT_HPP
# define ASCREENELEMENT_HPP


class AScreenElement
{
public:

	AScreenElement(void);
	AScreenElement(int x, int y);
	AScreenElement(AScreenElement const & src);
	virtual ~AScreenElement();
	
	AScreenElement const &	operator=(AScreenElement const & rdh);
	virtual bool	move( int ) = 0;

	bool colision(AScreenElement*&);
	virtual void toPrint();
	int		getX( void ) const ;
	int		getY( void ) const ;

protected:

	int _x;
	int _y;
	char _form;
};

#endif
