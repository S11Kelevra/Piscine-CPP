// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Hostname.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/17 13:24:35 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/17 13:43:48 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Hostname.hpp"
#include <string>
#include <iostream>
#include <unistd.h>

Hostname::Hostname( void ) : AWindow("Hostname")
{

}

Hostname::~Hostname( void )
{
}


const char* Hostname::getHostname( void ) {

	char hostname[1024];
	hostname[1023] = '\0';
	gethostname(hostname, 1023);
	const char *hostname_r = hostname;
	return hostname_r;
}

const char* Hostname::getUsername( void ) {

	char username[1024];
	username[1023] = '\0';
	getlogin_r(username, 1023);
	const char *username_r = username;
	return username_r;
}

void Hostname::printWindow( void ) {

	mvprintw(10, 71, "COMPUTER");
	mvprintw(12, 47, "Hostname:");
    mvprintw(12, 70, getHostname());
    mvprintw(6, 6, getUsername());
    refresh();
}

void Hostname::start( void ) {
	init(9, 60, 46, 9);
	printWindow();
}
