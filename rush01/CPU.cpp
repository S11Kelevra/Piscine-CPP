// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   CPU.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/17 16:32:20 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/17 16:32:20 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "CPU.hpp"
#include <iostream>
#include <sstream>
#include <sys/sysctl.h>
#include <sys/types.h>
#include <mach/mach_host.h>
#include <stdlib.h>

CPU::CPU( void ) : AWindow("CPU")
{

}

CPU::~CPU( void )
{
}

char* CPU::getMachine( void ) {

    size_t test2 = 100;

	char cpy[100];
	sysctlbyname("hw.model", &cpy, &test2, NULL, 0);
    char *cpy2 = cpy;
 	return(cpy2);
}

const char* CPU::getNCPU( void ) {

    size_t test2 = sizeof(int);

    int cpy;
	sysctlbyname("hw.ncpu", &cpy, &test2, NULL, 0);
    std::ostringstream stream;
    stream << cpy;
    std::string str = stream.str();
    const char* cstr = str.c_str();

 	return(cstr);
}

void        CPU::setClockRate( void ) {

    char tmp[50];
    size_t test2 = sizeof(_ClockRate);
    int i = 0;

    sysctlbyname("machdep.cpu.brand_string", &tmp, &test2, NULL, 0);
    while (i < 50)
    {
        if (tmp[i] == '@')
            break ;
        i++;
    }
    i += 2;
    int j = 0;
    while (j < 7)
    {
        _ClockRate[j] = tmp[i]; 
        j++;
        i++;
    }
    while (j < 50)
    {
        _ClockRate[j] = '\0';
        j++;
    }
}

const char*   CPU::getClockRate( void)
{
    setClockRate();
    return _ClockRate;
}


const char* CPU::getPhysMem( void ) {

    size_t test2 = sizeof(int);

    int cpy;
	sysctlbyname("hw.memsize", &cpy, &test2, NULL, 0);
    std::ostringstream stream;
    stream << cpy;
    std::string str = stream.str();
    const char* cstr = str.c_str();

 	return(cstr);
}

const char*     CPU::getCPUUsage( void )
{
    initUsage();
    return _CPUUsage;
}

const char*     CPU::getCPUUsage2( void )
{
    return _CPUUsage;
}

void    CPU::setCPUUsage( double cpu_usage)
{
    sprintf(_CPUUsage, "%f", cpu_usage);
}

void                CPU::initUsage(void)
{
    natural_t                       cpuCount;
    processor_cpu_load_info_t       cpuInfo;
    mach_msg_type_number_t          nbInfo;
    size_t    system = 0, user = 0, idle = 0;
    size_t    totalSystemTime = 0, totalUserTime = 0, totalIdleTime = 0;

    kern_return_t    r = host_processor_info(
                        mach_host_self(),
                        PROCESSOR_CPU_LOAD_INFO,
                        &cpuCount,
                        reinterpret_cast<processor_info_array_t *>(&cpuInfo),
                        &nbInfo);

    if (r != KERN_SUCCESS)
        return ;

    for (natural_t i = 0; i < cpuCount; i++)
    {
        system = cpuInfo[i].cpu_ticks[CPU_STATE_SYSTEM];
        user = cpuInfo[i].cpu_ticks[CPU_STATE_USER] + cpuInfo[i].cpu_ticks[CPU_STATE_NICE];
        idle = cpuInfo[i].cpu_ticks[CPU_STATE_IDLE];

        totalSystemTime += system;
        totalUserTime += user;
        totalIdleTime += idle;
    }

    newTotal = totalIdleTime + totalSystemTime + totalUserTime;
    newWork = totalSystemTime + totalUserTime;

    CPUUsage = (newWork - oldWork)/(newTotal - oldTotal) * 100;
    setCPUUsage(CPUUsage);

    oldTotal = newTotal;
    oldWork = newWork;
}

void        CPU::printWindow( void )
{
    initUsage();

    mvprintw(10, 21, "SYSTEM");
    mvprintw(12, 6, "CPU Model:");
    mvprintw(12, 24, getMachine());
    mvprintw(13, 6, "Cores Number:");
    mvprintw(13, 24, getNCPU());
    mvprintw(14, 6, "CPU Clock Speed:");
    mvprintw(14, 24, getClockRate());
    mvprintw(15, 6, "CPU Usage:");
    mvprintw(15, 24, getCPUUsage2());
    mvprintw(15, 32, "%%");    
    refresh();
}

void        CPU::start( void )
{
    initUsage();
	init(9, 40, 5, 9);
	printWindow();
}