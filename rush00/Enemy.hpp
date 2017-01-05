// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 17:41:17 by hlecuyer          #+#    #+#             //
//   Updated: 2015/01/10 17:41:18 by hlecuyer         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "AScreenElement.hpp"

#ifndef ENEMY_HPP
 #define ENEMY_HPP

class Enemy : public AScreenElement
{
public:
	Enemy(void);
	Enemy(int x, int y);
	Enemy(Enemy const & src);
	~Enemy();
	using AScreenElement::operator=;
	bool	move( int );

};

#endif
