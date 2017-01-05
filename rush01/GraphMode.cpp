// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   GraphMode.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/18 16:26:25 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/18 16:26:25 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "GraphMode.hpp"


GraphMode::GraphMode( void ) : hour(new Hour()), hostname(new Hostname()), osinfo(new OSInfo()), cpuinfo(new CPU()), ram(new RAM()) {

}

GraphMode::~GraphMode( void ) {

}

void GraphMode::start ( void ) {

}
