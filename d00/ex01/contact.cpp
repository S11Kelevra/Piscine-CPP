// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   contact.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/05 12:15:00 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/05 15:16:53 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "contact.hpp"
#include <iomanip>
#include <string>

Contact::Contact(): set(0) {}

Contact::~Contact() {}

int		Contact::addnew(void)
{
	if (set == 1)
		return (0);
	set = 1;
	std::cout << "Enter firstname: ";
	std::getline (std::cin, firstname);
	std::cout << "Enter lastname: ";
	std::getline (std::cin, lastname);
	std::cout << "Enter nickname: ";
	std::getline (std::cin, nickname);
	std::cout << "Enter login: ";
	std::getline (std::cin, login);
	std::cout << "Enter postal address: ";
	std::getline (std::cin, address);
	std::cout << "Enter email: ";
	std::getline (std::cin, email);
	std::cout << "Enter phone number: ";
	std::getline (std::cin, phone);
	std::cout << "Enter birthday: ";
	std::getline (std::cin, birthday);
	std::cout << "Enter favorite meal: ";
	std::getline (std::cin, meal);
	std::cout << "Enter underwear color: ";
	std::getline (std::cin, underwear);
	std::cout << "Enter darkest secret: ";
	std::getline (std::cin, secret);
	return (1);
}

void	Contact::showtruncate(std::string str)
{
	char	buffer[11];

	std::cout << std::setfill (' ') << std::setw (10);
	if (str.size() > 10)
	{
		str.copy(buffer, 9, 0);
		buffer[9]='.';
		buffer[10]='\0';
		std::cout << buffer;
	}
	else
		std::cout << str;
}

void	Contact::showbrief(void)
{
	if (set == 0)
	{
		std::cout << std::setfill (' ') << std::setw (11);
		std::cout << "|";
		std::cout << std::setfill (' ') << std::setw (11);
		std::cout << "|";
		std::cout << std::setfill (' ') << std::setw (11);
		std::cout << std::endl;
		return ;
	}
	showtruncate(firstname);
	std::cout << "|";
	showtruncate(lastname);
	std::cout << "|";
	showtruncate(nickname);
	std::cout << std::endl;
}

void	Contact::showfull(void)
{
	if (set == 0)
	{
		std::cout << "Error 404: contact not found." << std::endl;
		return ;
	}
	std::cout << "Firstname: " << firstname << std::endl;
	std::cout << "Lastname: " << lastname << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Login: " << login << std::endl;
	std::cout << "Postal Address: " << address << std::endl;
	std::cout << "Email: " << email << std::endl;
	std::cout << "Phone Number: " << phone << std::endl;
	std::cout << "Birthday: " << birthday << std::endl;
	std::cout << "Favorite Meal: " << meal << std::endl;
	std::cout << "Underwear Color: " << underwear << std::endl;
	std::cout << "Darkest Secret: " << secret << std::endl;
}