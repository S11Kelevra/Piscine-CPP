// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/15 13:38:57 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/15 13:38:58 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "easyfind.hpp"
#include <list>
#include <vector>

int main()
{
	std::list<int>	lst1;

	lst1.push_back(3);
	lst1.push_back(14);
	lst1.push_back(26);
	lst1.push_back(18);
	lst1.push_back(42);

	try {
		std::cout << easyfind(lst1, 18) << std::endl;
	}
	catch (std::logic_error e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << easyfind(lst1, 5) << std::endl;
	}
	catch (std::logic_error e) {
		std::cout << e.what() << std::endl;
	}


	std::vector<int>	vec;

	vec.push_back(8);
	vec.push_back(5);
	vec.push_back(96);
	vec.push_back(64);
	vec.push_back(23);

	try {
		std::cout << easyfind(vec, 96) << std::endl;
	}
	catch (std::logic_error e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << easyfind(vec, 47) << std::endl;
	}
	catch (std::logic_error e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}