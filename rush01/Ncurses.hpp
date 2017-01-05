// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ncurses.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/18 16:27:34 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/18 16:27:34 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Hour.hpp"
#include "Hostname.hpp"
#include "CPU.hpp"
#include "OSInfo.hpp"
#include "RAM.hpp"
#include "Network.hpp"
#include "IMonitorDisplay.hpp"

#ifndef NCURSES_HPP
# define NCURSES_HPP

class Ncurses : public IMonitorDisplay
{
private:
    Hour        *_hour;
	Hostname    *_hostname;
    OSInfo      *_osinfo;
    CPU         *_cpuinfo;
    RAM         *_ram;
    Network		*_network;

	explicit Ncurses(Ncurses const &);
	Ncurses& operator=(Ncurses const &);

public:
	Ncurses();
	~Ncurses();
	void start( void );
};

#endif
