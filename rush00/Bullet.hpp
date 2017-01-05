// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bullet.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 18:02:30 by hlecuyer          #+#    #+#             //
//   Updated: 2015/01/10 18:02:30 by hlecuyer         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "AScreenElement.hpp"

#ifndef Bullet_HPP
 #define Bullet_HPP

class Bullet : public AScreenElement
{
public:
	Bullet(void);
	Bullet(int x, int y);
	Bullet(Bullet const & src);
	~Bullet();
	using AScreenElement::operator=;
	bool	move( int );
	bool colision(AScreenElement const & elem);
};

#endif
