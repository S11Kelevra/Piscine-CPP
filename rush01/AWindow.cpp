// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWindow.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/18 16:25:08 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/18 16:25:18 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "awindow.hpp"
#include <ncurses.h>
#include <iostream>
#include <sys/time.h>
#include <cstdlib>

AWindow::AWindow(std::string name): _name(name), HEIGHT(WINHEIGHT), WIDTH(WINWIDTH), WSTARTX(WINSTARTX), WSTARTY(WINSTARTY) {
}

AWindow::~AWindow() {
    destroyWin();
    endwin();
}

void	AWindow::createWin(int height, int width, int starty, int startx) {

    my_win = newwin(height, width, starty, startx);
    box(my_win, 0 , 0);
    wrefresh(my_win);
}

void	AWindow::destroyWin() {
    wborder(my_win, ' ', ' ', ' ',' ',' ',' ',' ',' ');
    wrefresh(my_win);
    clear();
    refresh();
    delwin(my_win);
}


void	AWindow::init(int height, int width, int startx, int starty) {

    initscr();
    noecho();
    curs_set(false);
    cbreak();
    timeout(0);
    keypad(stdscr, true);

    refresh();
    createWin(height, width, starty, startx);
}

