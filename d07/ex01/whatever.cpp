// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   whatever.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/14 17:23:52 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/14 17:23:54 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template< typename T >
void	whatever( T* array, unsigned int length, void (*f)(T) )
{
	for (unsigned int i = 0; i < length; ++i)
		f(array[i]);
}

template< typename T >
void	print(T var) {
	std::cout << var << std::endl;
}

int	main()
{
	int foo[] = { 16, 2, 77, 40, 12071 };
	std::string fuu[] = { "lol", "swag", "yolo" };


	::whatever(foo, 5, ::print);
	::whatever(fuu, 3, ::print);

	return 0;
}