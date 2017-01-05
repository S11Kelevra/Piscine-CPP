// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   IMonitorDisplay.hpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/18 16:27:13 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/18 16:27:13 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

#ifndef I_MONITOR_DISPLAY_HPP
 #define I_MONITOR_DISPLAY_HPP

class IMonitorDisplay
{

public:
	virtual void	start( void ) = 0;

};

#endif
