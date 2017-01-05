// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   GraphMode.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/18 16:26:19 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/18 16:26:19 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Hour.hpp"
#include "Hostname.hpp"
#include "CPU.hpp"
#include "OSInfo.hpp"
#include "RAM.hpp"
#include "IMonitorDisplay.hpp"

#ifndef GRAPH_MODE_HPP
# define GRAPH_MODE_HPP

class GraphMode : public IMonitorDisplay
{
private:
    Hour        *hour;
	Hostname    *hostname;
    OSInfo      *osinfo;
    CPU         *cpuinfo;
    RAM         *ram;
	GraphMode(GraphMode const & );
	GraphMode& operator=(GraphMode const &);
	
public:
	GraphMode();
	~GraphMode();

	void start ( void );
};

#endif
