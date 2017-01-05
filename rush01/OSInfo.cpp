// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   OSInfo.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/17 15:31:56 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/17 15:31:56 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "OSInfo.hpp"
#include <string>
#include <iostream>
#include <sys/sysctl.h>
#include <sys/types.h>

OSInfo::OSInfo( void ) : AWindow("OSInfo")
{
    setOSName();
    setOSProductVersion();
    setOSBuildVersion();
    setOSType();
}

OSInfo::~OSInfo( void )
{
}

const char *        OSInfo::getOSName( void ) const
{
    return _OSName;
}

const char *        OSInfo::getOSProductVersion( void ) const
{
    return _OSProductVersion;
}

const char *        OSInfo::getOSBuildVersion( void ) const
{
    return _OSBuildVersion;    
}

const char *        OSInfo::getOSType( void ) const
{
    return _OSType;    
}

void                OSInfo::setOSName( void )
{
    
    const char*     cmd ="sw_vers -productName";
    FILE*           pipe = popen(cmd, "r");

    if (!pipe)
        return ;

    while(!feof(pipe)) {
        fgets(_OSName, 128, pipe);
    }
    pclose(pipe);
}


void                OSInfo::setOSProductVersion( void )
{
  
    const char*     cmd ="sw_vers -productVersion";
    FILE*           pipe = popen(cmd, "r");
    
    if (!pipe)
        return ;
    
    while(!feof(pipe)) {
       fgets(_OSProductVersion, 128, pipe);
    }
    pclose(pipe);

}


void                OSInfo::setOSBuildVersion( void )
{

    const char*     cmd ="sw_vers -buildVersion";
    FILE*           pipe = popen(cmd, "r");

    if (!pipe)
        return ;
    
    while(!feof(pipe)) {
        fgets(_OSBuildVersion, 128, pipe);
    }
    pclose(pipe);
}

void                OSInfo::setOSType( void ) {

    size_t test2 = 100;

    sysctlbyname("kern.ostype", &_OSType, &test2, NULL, 0);
}


void                OSInfo::printWindow( void ) {

    mvprintw(13, 47, "OS Name:");
    mvprintw(13, 70, getOSName());
    mvprintw(13, 105, "|");
    mvprintw(14, 47, "OS Product Version:");
    mvprintw(14, 70, getOSProductVersion());
    mvprintw(14, 105, "|");
    mvprintw(15, 47, "OS Build Version:");
    mvprintw(15, 70, getOSBuildVersion());
    mvprintw(15, 105, "|");
    mvprintw(16, 47, "OS Type:");
    mvprintw(16, 70, getOSType());
    refresh();
}

void                OSInfo::start( void ) {

	printWindow();
}