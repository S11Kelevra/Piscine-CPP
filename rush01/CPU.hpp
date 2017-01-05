// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   CPU.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/17 16:32:16 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/17 16:32:16 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CPU_HPP
 #define CPU_HPP

#include <iostream>
#include "AWindow.hpp"

class CPU : public AWindow {

	private:
		CPU(CPU const &);
		CPU		&operator=(CPU const &);
		double CPUUsage;
		double oldWork;
		double newWork;
		double oldTotal;
		double newTotal;
		char		_CPUUsage[50];
		char		_ClockRate[50];

	public:
		CPU(void);
		~CPU(void);
		
		char* getTotalVM( void );
		char* getMachine( void );
		const char* getPhysMem( void );
		const char* getNCPU( void );
		const char* getClockRate( void );	
		const char* getCPUUsage( void );
		const char* getCPUUsage2( void );		

		void setClockRate( void );
		void setCPUUsage( double cpu_usage );
		void printWindow( void );
		void initUsage( void );
		void start( void );
};

#endif