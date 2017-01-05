// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/15 19:30:39 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/15 19:30:39 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <time.h>
#include <iostream>

Base * generate(void)
{
	int		ran = (rand() % 3) + 1;

	if (ran == 1)
		return new A();
	else if (ran == 2)
		return new B();
	else if (ran == 3)
		return new C();
	else
		return (NULL);
}

void	identify_from_pointer( Base * p )
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" << std::endl;
}

void	identify_from_reference( Base & p )
{
	if (dynamic_cast<A *>(&p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(&p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(&p) != NULL)
		std::cout << "C" << std::endl;			
}

int	main(void)
{
	Base	*p;

	srand(time(NULL));
	p = generate();
	identify_from_pointer(p);
	identify_from_reference(*p);
	return (0);
}