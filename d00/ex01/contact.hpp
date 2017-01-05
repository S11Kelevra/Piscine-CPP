// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   contact.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/05 12:15:00 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/05 15:16:53 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
public:
	Contact();
	~Contact();

	int		addnew(void);
	void	showbrief(void);
	void	showfull(void);
	void	showtruncate(std::string str);

	int				set;
	std::string		firstname;
	std::string		lastname;
	std::string		nickname;
	std::string		login;
	std::string		address;
	std::string		email;
	std::string		phone;
	std::string		birthday;
	std::string		meal;
	std::string		underwear;
	std::string		secret;
};

#endif