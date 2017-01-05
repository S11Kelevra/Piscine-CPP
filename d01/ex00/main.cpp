// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/06 17:24:55 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/06 18:55:23 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony*	heap = new Pony;

	std::cout << "A Heap Pony is jumping everywhere !" << std::endl;
	delete heap;
}

void	ponyOnTheStack(void)
{
	Pony	stack;

	std::cout << "A Stack Pony is jumping everywhere !" << std::endl;
}

int		main()
{
	std::cout << std::endl << "Call ponyOnTheHeap :" << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl << "Call ponyOnTheStack :" << std::endl;
	ponyOnTheStack();
	std::cout << std::endl << "End of treatment." << std::endl;

	return 0;
}
