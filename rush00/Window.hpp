// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Window.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 11:08:00 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/11 11:08:07 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WINDOW_HPP
# define WINDOW_HPP

#define WINHEIGHT 20
#define WINWIDTH 100
#define WINSTARTX 5
#define WINSTARTY 5

#include "AScreenElement.hpp"
#include "SpaceShip.hpp"
#include "Enemy.hpp"
#include "Bullet.hpp"
#include "EnemyBullet.hpp"
#include <ncurses.h>
#include <sys/time.h>

class Window
{

public:

	Window();
	Window(Window const &);
	~Window();

	Window const &	operator=(Window const &);
	void	createWin();
	void	destroyWin();
	void	play();

private:

	AScreenElement* elements[50];
	AScreenElement* bullets[500];
	AScreenElement* enemybullets[500];
	SpaceShip		fzero;
	int				input;
	int				lastInput;
	int 			score;
	unsigned long	timeFrameCount;
	struct timeval	start;
	struct timeval	now;
	WINDOW			*my_win;
	const int		HEIGHT;
	const int		WIDTH;
	const int		WSTARTX;
	const int		WSTARTY;

	void	init();
	void	printScreen();
	void	initArray();
	void	initArray2();
	void	initEnemy();
	void	initBullets();
	void	initenemyBullets();
	void	shoot(int y);
	void	enemyshoot(int x, int y);
	void	createEnemy(int timeFrameCount);
	void	moveElements(int const input);
	unsigned int 	timediff(timeval t1, timeval t2);
	int		collide();
};

#endif

