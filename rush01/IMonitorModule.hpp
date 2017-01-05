// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   IMonitorModule.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/18 16:27:23 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/18 16:27:23 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

#ifndef I_MONITOR_MODULE_HPP
 #define I_MONITOR_MODULE_HPP

class IMonitorModule
{
public:
    virtual void    start() = 0;
    virtual void    printWindow() = 0;
};

#endif
