// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/06 17:24:55 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/06 19:33:18 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"
#include <iostream>

int		main()
{
	Human bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	return (0);
}