// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Hour.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/17 13:16:31 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/17 13:16:31 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HOUR_HPP
 #define HOUR_HPP

#include <iostream>
#include <sstream>
#include "AWindow.hpp"

class Hour : public AWindow {

	private:
		Hour(Hour const &);
		Hour		&operator=(Hour const &);
		char		_buffer[80];

	public:
		Hour(void);
		~Hour(void);
		const char*		getHour( void );
		void			setHour( void );
		void			printWindow( void );
		void			start( void );
};

#endif
