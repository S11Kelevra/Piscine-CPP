// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Hour.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/17 13:16:23 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/17 13:16:25 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Hour.hpp"
#include <string>
#include <iostream>

Hour::Hour( void ) : AWindow("Hour of the day")
{
    setHour();

}

Hour::~Hour( void )
{
}


void         Hour::setHour( void ) {

    time_t rawtime;
    struct tm * timeinfo;

    time (&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(_buffer,80,"%d-%m-%Y %I:%M:%S",timeinfo);
}

const char *      Hour::getHour(void)
{
    setHour();
    return _buffer;
}

void        Hour::printWindow( void ) {

    setHour();
    mvprintw(7, 6, getHour());
    refresh();
}

void Hour::start( void ) {
	init(4, 101, 5, 5);
	printWindow();
}
