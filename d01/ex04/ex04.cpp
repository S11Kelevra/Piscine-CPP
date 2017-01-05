// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/06 19:03:47 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/06 19:09:31 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int		main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	strPtr = &str;
	std::string&	strRef = str;

	std::cout << *strPtr << std::endl;
	std::cout << strRef << std::endl;
}
