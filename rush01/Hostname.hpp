// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Hostname.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/17 13:24:38 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/17 13:24:38 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HOSTNAME_HPP
 #define HOSTNAME_HPP

#include <iostream>
#include "AWindow.hpp"

class Hostname : public AWindow {

	private:
		Hostname(Hostname const &);
		Hostname		&operator=(Hostname const &);

	public:
		Hostname(void);
		~Hostname(void);
		const char* getHostname( void );
		const char* getUsername( void );
		void printWindow( void );
		void start( void );
};

#endif