// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/14 17:23:52 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/14 17:23:54 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Array.hpp"
#include <stdexcept>
#include <iostream>

int main() {
	unsigned int i = 9;
	Array<int> intNum = Array<int>(i);

	intNum[0] = 3;
	intNum[1] = 8;
	intNum[2] = 19;
	intNum[3] = 35;
	intNum[4] = 36;
	intNum[5] = 37;
	intNum[6] = 38;
	intNum[7] = 39;
	intNum[8] = 89;
	try {
		intNum[9] = 42;
	}
	catch (std::range_error e){
		std::cout << e.what() << std::endl;
	}
	std::cout << intNum[0] << ", "
			  << intNum[1] << ", "
			  << intNum[2] << ", "
			  << intNum[3] << ", "
			  << intNum[4] << ", "
			  << intNum[5] << ", "
			  << intNum[6] << ", "
			  << intNum[7] << ", "
			  << intNum[8] << "  !!! "
			  << std::endl;
	Array<int> intNumCpy = Array<int>(intNum);

	intNumCpy[0] = 8732;

	std::cout << intNum[0] << "    ===> pour voir si rien n'a change " << std::endl;

	std::cout << intNumCpy[0] << ", "
			  << intNumCpy[1] << ", "
			  << intNumCpy[2] << ", "
			  << intNumCpy[3] << ", "
			  << intNumCpy[4] << ", "
			  << intNumCpy[5] << ", "
			  << intNumCpy[6] << ", "
			  << intNumCpy[7] << ", "
			  << intNumCpy[8] << "  !!! "
			  << std::endl;

	intNumCpy = intNum;
	std::cout << "Apres intNumCpy = intNum   :" << std::endl
			  << intNumCpy[0] << ", "
			  << intNumCpy[1] << ", "
			  << intNumCpy[2] << ", "
			  << intNumCpy[3] << ", "
			  << intNumCpy[4] << ", "
			  << intNumCpy[5] << ", "
			  << intNumCpy[6] << ", "
			  << intNumCpy[7] << ", "
			  << intNumCpy[8] << "  !!! "
			  << std::endl;

	i = 7;
	Array<std::string> string = Array<std::string>(i);
	string[0] = "Premiere string";
	string[1] = "Deuxieme string";
	string[2] = "Troisieme string";
	string[3] = "Quatrieme string";
	string[4] = "Cinquieme string";
	string[5] = "Sixieme string";
	string[6] = "Septieme string";
	try{
		string[7] = "Fail string";
	}
	catch (std::range_error e){
		std::cout << e.what() << std::endl;
	}
	std::cout << string[0] << ", "
			  << string[1] << ", "
			  << string[2] << ", "
			  << string[3] << ", "
			  << string[4] << ", "
			  << string[5] << ", "
			  << string[6] << " !!!!"
			  << std::endl;

	std::cout << "test de size() : " << intNum.size() << std::endl;

	Array<int> def = Array<int>();
	std::cout << "constructeur par default : " << def.size() << std::endl;

	return 0;
}