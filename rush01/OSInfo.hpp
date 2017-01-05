// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   OSInfo.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/17 15:32:00 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/17 15:32:01 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef OSINFO_HPP
 #define OSINFO_HPP

#include <iostream>
#include "AWindow.hpp"

class OSInfo : public AWindow {

	private:
		OSInfo(OSInfo const &);
		OSInfo			&operator=(OSInfo const &);

		char			_OSType[100];
		char			_OSBuildVersion[100];
		char			_OSProductVersion[100];
		char			_OSName[100];


	public:
		OSInfo(void);
		~OSInfo(void);

		const char* 	getOSName( void ) const;
		const char* 	getOSProductVersion( void ) const;
		const char* 	getOSBuildVersion( void ) const;
		const char*		getOSType( void ) const;

		void		 	setOSName( void );
		void		 	setOSProductVersion( void );
		void		 	setOSBuildVersion( void );
		void			setOSType( void );

		void printWindow( void );
		void start( void );
};

#endif