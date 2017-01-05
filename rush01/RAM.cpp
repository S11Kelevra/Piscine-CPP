// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RAM.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/18 13:02:58 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/18 13:02:59 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "RAM.hpp"
#include <sstream>
#include <mach/vm_statistics.h>
#include <mach/mach_types.h>
#include <mach/mach_init.h>
#include <mach/mach_host.h>

RAM::RAM( void ) : AWindow("RAM")
{

}

RAM::~RAM( void )
{
}


const char* RAM::getUsedRAM( void ) {

	vm_size_t page_size;
    mach_port_t mach_port;
    mach_msg_type_number_t count;
    vm_statistics64_data_t vm_stats;

    mach_port = mach_host_self();
    count = sizeof(vm_stats) / sizeof(natural_t);
    if (KERN_SUCCESS == host_page_size(mach_port, &page_size) &&
        KERN_SUCCESS == host_statistics64(mach_port, HOST_VM_INFO,
                                        (host_info64_t)&vm_stats, &count))
    {
        long long freeMemory = vm_stats.free_count * page_size;

        long long usedMemory = (vm_stats.active_count +
                                 vm_stats.inactive_count +
                                 vm_stats.wire_count) *  page_size;
        long long totalMemory = freeMemory + usedMemory;

        double procent = static_cast<double>(usedMemory * 100) / static_cast<double>(totalMemory);
        std::ostringstream stream;
        stream << procent;
        std::string str = stream.str();
        const char* ret = str.c_str();
        return ret;
    }
    return NULL;
}

const char* RAM::getTotalRAM( void ) {

	vm_size_t page_size;
    mach_port_t mach_port;
    mach_msg_type_number_t count;
    vm_statistics64_data_t vm_stats;

    mach_port = mach_host_self();
    count = sizeof(vm_stats) / sizeof(natural_t);
    if (KERN_SUCCESS == host_page_size(mach_port, &page_size) &&
        KERN_SUCCESS == host_statistics64(mach_port, HOST_VM_INFO,
                                        (host_info64_t)&vm_stats, &count))
    {
        long long freeMemory = vm_stats.free_count * page_size;

        long long usedMemory = (vm_stats.active_count +
                                 vm_stats.inactive_count +
                                 vm_stats.wire_count) *  page_size;
        long long totalMemory = freeMemory + usedMemory;
        std::ostringstream stream;
        stream << static_cast<double>(totalMemory) / 1000000000.0;
        std::string str = stream.str();
        const char* ret = str.substr(0, 4).c_str();
        return ret;
    }
    return NULL;
}

void RAM::printWindow( void ) {

	mvprintw(19, 19, "RAM MEMORY");
	mvprintw(21, 6, "Used Memory:");
    mvprintw(21, 24, getUsedRAM());
    mvprintw(21, 32, "%%");
	mvprintw(22, 6, "Total Memory:");
    mvprintw(22, 24, getTotalRAM());
    mvprintw(22, 29, "GB");
    refresh();
}

void RAM::start( void ) {
	init(8, 40, 5, 18);
	printWindow();
}