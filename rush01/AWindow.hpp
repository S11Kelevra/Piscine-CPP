// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWindow.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/17 13:16:11 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/17 13:16:14 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AWINDOW_HPP
# define AWINDOW_HPP

#define WINHEIGHT 3
#define WINWIDTH 40
#define WINSTARTX 5
#define WINSTARTY 5

#include <ncurses.h>
#include <sys/time.h>
#include <iostream>
#include "IMonitorModule.hpp"

class AWindow : public IMonitorModule
{

protected:

    const std::string _name;
    const int	HEIGHT;
    const int	WIDTH;
    const int	WSTARTX;
    const int	WSTARTY;
    WINDOW		*my_win;


    AWindow(AWindow const &);
    AWindow const &	operator=(AWindow const &);
    AWindow();

    void	init(int height, int width, int startx, int starty);
    void	destroyWin();
    void	createWin(int height, int width, int startx, int starty);

public:

    AWindow(std::string name);
    virtual ~AWindow();
    virtual void    start() = 0;
    virtual void    printWindow() = 0;



};

#endif

