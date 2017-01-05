// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Network.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/18 20:40:11 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/18 20:40:12 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#ifndef NETWORK_HPP
 #define NETWORK_HPP

#include "AWindow.hpp"

class Network : public AWindow {

	private:
		const char*	_inbytes;
		const char*	_oubytes;
		const char*	_inpacket;
		const char*	_oupacket;

		Network(Network const &);
		Network		&operator=(Network const &);

	public:
		Network(void);
		~Network(void);
		
		void			getNetworkValues();
		const char* 			getInputBytes( void ) const;
		const char* 			getOutputBytes( void ) const;
		const char* 			getInputPacket( void ) const;
		const char* 			getOutputPacket( void ) const;
		void 			printWindow( void );
		void 			start( void );
};

#endif
