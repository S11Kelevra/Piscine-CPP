// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RAM.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/18 13:03:02 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/18 13:03:03 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef RAM_HPP
 #define RAM_HPP

#include <iostream>
#include "AWindow.hpp"

class RAM : public AWindow {

	private:
		RAM(RAM const &);
		RAM		&operator=(RAM const &);

	public:
		RAM(void);
		~RAM(void);
		const char* getUsedRAM( void );
		const char* getTotalRAM( void );
		void printWindow( void );
		void start( void );
};

#endif