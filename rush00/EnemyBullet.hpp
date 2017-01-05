// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   EnemyBullet.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: hlecuyer <hlecuyer@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 18:02:30 by hlecuyer          #+#    #+#             //
//   Updated: 2015/01/10 18:02:30 by hlecuyer         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "AScreenElement.hpp"

#ifndef Enemy_Bullet_HPP
 #define Enemy_Bullet_HPP

class EnemyBullet : public AScreenElement
{
public:
	EnemyBullet(void);
	EnemyBullet(int x, int y);
	EnemyBullet(EnemyBullet const & src);
	~EnemyBullet();
	using AScreenElement::operator=;
	bool	move( int );
	bool colision(AScreenElement const & elem);
};

#endif
