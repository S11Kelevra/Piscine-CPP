// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Network.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/18 20:39:39 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/18 20:39:56 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Network.hpp"
#include <net/route.h>
#include <net/if.h>
#include <sys/sysctl.h>
#include <sstream>

Network::Network( void ) : AWindow("Network") {

}

Network::~Network( void ) {

}

void	Network::getNetworkValues() {

	int 		mib[6];
	char 		*lim;
	char 		*next;
	size_t 		len;
	struct 		if_msghdr *ifm;

	long int 	ipackets = 0;
	long int 	opackets = 0;
	long int 	ibytes = 0;
	long int 	obytes = 0;

	mib[0]= CTL_NET;// networking subsystem
	mib[1]= PF_ROUTE;// type of information
	mib[2]= 0;// protocol (IPPROTO_xxx)
	mib[3]= 0;// address family
	mib[4]= NET_RT_IFLIST2;// operation
	mib[5]= 0;
	
	sysctl(mib, 6, NULL, &len, NULL, 0);
	char buf[len];
	sysctl(mib, 6, buf, &len, NULL, 0);

	lim = buf + len;
	for (next = buf; next < lim; ) {
		ifm = (struct if_msghdr *)next;
		next += ifm->ifm_msglen;

		if (ifm->ifm_type == RTM_IFINFO2) {
			struct if_msghdr2 *if2m = (struct if_msghdr2 *)ifm;

			if(if2m->ifm_data.ifi_type!=18) {
				opackets += if2m->ifm_data.ifi_opackets;
				ipackets += if2m->ifm_data.ifi_ipackets;
				obytes   += if2m->ifm_data.ifi_obytes;
				ibytes   += if2m->ifm_data.ifi_ibytes;
			}
		}
	}

	std::ostringstream stream;
    stream << static_cast<double>(ibytes) / 1000000000.0;
    std::string str = stream.str().substr(0, 7);
    _inbytes = str.c_str();

    std::ostringstream stream2;
    stream2 << static_cast<double>(obytes) / 1000000000.0;
    std::string str2 = stream2.str().substr(0, 7);
    _oubytes = str2.c_str();

    std::ostringstream stream3;
    stream3 <<  ipackets;
    std::string str3 = stream3.str().substr(0, 5);
    _inpacket = str3.c_str();

    std::ostringstream stream4;
    stream4 << opackets;
    std::string str4 = stream4.str().substr(0, 5);
    _oupacket = str4.c_str();
}

const char* 	Network::getInputBytes( void ) const {
	return _inbytes;
}

const char* 	Network::getOutputBytes( void ) const {
	return _oubytes;
}

const char* 	Network::getInputPacket( void ) const {
	return _inpacket;
}

const char* 	Network::getOutputPacket( void ) const {
	return _oupacket;
}

void Network::printWindow( void ) {

	getNetworkValues();
	mvprintw(19, 71, "NETWORK");
    mvprintw(21, 47, "Input Packets:");
    mvprintw(22, 47, "Output Packets:");
    mvprintw(23, 47, "Input Bytes: ");
    mvprintw(24, 47, "Output Bytes:");
    mvprintw(21, 70, getInputPacket());
    mvprintw(22, 70, getOutputPacket());
    mvprintw(23, 70, getInputBytes());
    mvprintw(24, 70, getOutputBytes());
    mvprintw(21, 75, "k");
    mvprintw(22, 75, "k");    
    mvprintw(23, 78, "GB");
    mvprintw(24, 78, "GB");
    refresh();
}

void Network::start( void ) {
	init(8, 60, 46, 18);
	printWindow();
}
