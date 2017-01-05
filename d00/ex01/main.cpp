// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/05 12:15:00 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/05 15:16:53 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

void	ft_add_contact(Contact *tab)
{
	if (tab[7].set == 1)
	{
		std::cout << "Error: the phonebook is already full." << std::endl;
		return ;
	}
	for (int i = 0; tab[i].addnew() == 0; i++);
}

void	ft_search_contact(Contact *tab)
{
	std::string		number;
	int				index;

	std::cout << "     Index|First Name| Last Name| Nick Name" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << i + 1 << "|";
		tab[i].showbrief();
	}
	std::cout << "Enter an index: ";
	std::getline (std::cin, number);
	if (number.size() == 1 && number[0] > 48 && number[0] < 57)
	{
			index = number[0] - 49;
			tab[index].showfull();
	}
	else
		std::cout << "Error: Please Enter a valid Index." << std::endl;
}

int	 	main(void)
{
	Contact			tab[8];
	std::string		line;

	while (line != "EXIT")
	{
		std::cout << "Enter a command: ";
		std::getline (std::cin, line);
		if (line == "ADD")
			ft_add_contact(tab);
		else if (line == "SEARCH")
			ft_search_contact(tab);
		else if (line != "EXIT" && line != "")
			std::cout << "Error: Please Enter ADD, SEARCH or EXIT." << std::endl;
	}
	return 0;
}