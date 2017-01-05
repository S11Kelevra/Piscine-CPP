// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ncurses.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/18 16:27:39 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/18 16:27:40 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Ncurses.hpp"
#include <unistd.h>

Ncurses::Ncurses( void ) : _hour(new Hour()), _hostname(new Hostname()), _osinfo(new OSInfo()), _cpuinfo(new CPU()), _ram(new RAM()), _network(new Network()) {

}

Ncurses::~Ncurses( void ) {

}

void Ncurses::start ( void ) {
    _hour->start();
    _hostname->start();
    _osinfo->start();
    _cpuinfo->start();
    _ram->start();
    _network->start();
    int input = 0;

   	input = getch();
    while (input != 27)
    {
    	input = getch();
        _hour->printWindow();
        _hostname->printWindow();
        _osinfo->printWindow();
        _cpuinfo->printWindow();
        _ram->printWindow();
        _network->printWindow();
        usleep(1000000);
    }
    delete _hostname;
    delete _osinfo;
    delete _hour;
    delete _cpuinfo;
    delete _ram;
    delete _network;
}
