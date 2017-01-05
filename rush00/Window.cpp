// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Window.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 11:08:00 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/11 15:35:40 by hlecuyer         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Window.hpp"
#include <ncurses.h>
#include <iostream>
#include <sys/time.h>
#include <cstdlib>

Window::Window(): fzero(SpaceShip()), input(ERR), lastInput(ERR), timeFrameCount(0), HEIGHT(WINHEIGHT), WIDTH(WINWIDTH), WSTARTX(WINSTARTX), WSTARTY(WINSTARTY) {

	init();
}


Window::Window(Window const & src): fzero(SpaceShip()), input(ERR), lastInput(ERR), HEIGHT(WINHEIGHT), WIDTH(WINWIDTH), WSTARTX(WINSTARTX), WSTARTY(WINSTARTY) {

	init();
	*this = src;
}

Window::~Window() {
	destroyWin();
    endwin();
    std::cout << "* GAME OVER *" << std::endl;
}


Window const &	Window::operator=(Window const & rhs) {

	if (this != &rhs)
	{
		this->input = rhs.input;
		this->lastInput = rhs.lastInput;
		this->start = rhs.start;
		this->now = rhs.now;
	}
	return *this;
}

void	Window::createWin() {

    my_win = newwin(HEIGHT, WIDTH, WSTARTY, WSTARTX);
    box(my_win, 0 , 0);
    wrefresh(my_win);
}

void	Window::destroyWin() {
    wborder(my_win, ' ', ' ', ' ',' ',' ',' ',' ',' ');
    wrefresh(my_win);
    clear();
    refresh();
    delwin(my_win);
}

void    Window::shoot(int y) {
    int i;
    for (i = 0; i < 500; i++) {
        if(bullets[i] == NULL)
        {
            bullets[i] = new Bullet(WSTARTX + 6, y);
            return;
        }
    }
}

void    Window::enemyshoot(int x, int y) {
    int i;

    for (i = 0; i < 500; i++)
    {
        if(enemybullets[i] == NULL)
        {
            enemybullets[i] = new EnemyBullet(x - 2, y);
            return;
        }
    }
}

void    Window::moveElements(int const input)
{

    fzero.move(input, timeFrameCount);
    if (input == 32)
    {
        shoot(fzero.getY());
    }
    for (int i = 0; i < 50; ++i)
    {
        if (elements[i])
        {
            if (!elements[i]->move(timeFrameCount))
            {
                delete elements[i];
                elements[i] = NULL;
            }
        }
    }
    for (int i = 0; i < 50; ++i)
    {
        if (elements[i])
        {
            if (elements[i] != NULL)
            {
                if ((rand() % 125) == 1)
                   enemyshoot(elements[i]->getX(), elements[i]->getY());
            }
        }
    }
    for (int i = 0; i < 500; ++i)
    {
        if (bullets[i])
        {
            if (!bullets[i]->move(timeFrameCount)){
                delete bullets[i];
                bullets[i] = NULL;
            }
        }
    }
    for (int i = 0; i < 500; ++i)
    {
        if (enemybullets[i])
        {
            if (!enemybullets[i]->move(timeFrameCount))
            {
            	delete enemybullets[i];
                enemybullets[i] = NULL;
            }
        }
    }
}

void    Window::printScreen() {

    mvprintw(4, 5, "SCORE ");
    mvprintw(4, 12, "%d", score);

    mvprintw(4, 103, "%d", fzero.life);
    mvprintw(4, 97, "LIFE");
    fzero.toPrint();
    for (int i = 0; i < 50; ++i)
    {
        if (elements[i])
            elements[i]->toPrint();
    }
    for (int i = 0; i < 500; ++i)
    {
      if (bullets[i])
            bullets[i]->toPrint();  
    }
    for (int i = 0; i < 500; ++i)
    {
      if (enemybullets[i])
            enemybullets[i]->toPrint();  
    }
}

void    Window::initArray() {

    for (int i = 0; i < 50; ++i)
    {
        if (elements[i])
            elements[i] = NULL;
    }
}

void    Window::createEnemy(int timeFrameCount) {
    if (timeFrameCount % 20 == 0){
        int y = (rand() % 18) + 6;
        for (int i = 0; i < 500; ++i)
            {
                if (!elements[i]) {
                    elements[i] = new Enemy(WIDTH + WINSTARTX - 1, y);
                    return;
                }
            }
    }
}

void    Window::initBullets() {

    for (int i = 0; i < 500; ++i)
        elements[i] = new Bullet();
}

void    Window::initenemyBullets() {

    for (int i = 0; i < 500; ++i)
        elements[i] = new EnemyBullet();
}

void    Window::initArray2() {
    for (int i = 0; i < 500; ++i)
    {
        if (bullets[i])
            bullets[i] = NULL;
        if (enemybullets[i])
            enemybullets[i] = NULL;
    }
}

void	Window::init() {

    initArray();
	initscr();
    initArray2();
    noecho();
    curs_set(false);
    timeout(0);
    cbreak();
    keypad(stdscr, true);

    gettimeofday(&start, NULL);
    refresh();
    createWin();
    printScreen();
}

unsigned int    Window::timediff(timeval t1, timeval t2) {

    return ((t2.tv_sec * 1000000 + t2.tv_usec) - (t1.tv_sec * 1000000 + t1.tv_usec));
}

int     Window::collide()
{
    for (int i = 0; i < 50; ++i)
    {
        if (elements[i] && fzero.colision(elements[i]))
            fzero.life--;
        if (fzero.life < 0)
            return (1);
    }
    for (int i = 0; i < 500; ++i)
    {
        if (enemybullets[i] && fzero.colision(enemybullets[i]))
        {
            delete enemybullets[i];
            enemybullets[i] = NULL;
            fzero.life--;
        }
        if (fzero.life < 0)
            return (1);
    }

    for (int j = 0; j < 500; ++j)
    {
        for (int k = 0; (k < 50 && bullets[j]) ; ++k)
        {
            if (elements[k] && bullets[j]->colision(elements[k]))
            {
                delete bullets[j];
                bullets[j] = NULL;
                delete elements[k];
                elements[k] = NULL;
                score += 5;
            }
        }
    }
    return (0);
}

void	Window::play() {

    score = 0;
    input = getch();
    while (input != 27){
        input = getch();
        if (input != ERR) {
            lastInput = input;
        }
        gettimeofday(&now, NULL);      
        if (timediff(start, now) >= (1000000 / 24)) {
            destroyWin();
            createWin();
            createEnemy(timeFrameCount);
            moveElements(lastInput);
            printScreen();
            if (collide())
                return ;
            lastInput = ERR;
            start = now;
            timeFrameCount++;
        }
    }
}
