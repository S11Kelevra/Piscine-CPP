// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/05 12:15:00 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/05 15:16:53 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int		main(int argc, char** argv) {

	char	c;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
			{
				c = argv[i][j] - 32;
				std::cout << c;
			}
			else {
				std::cout << argv[i][j];
			}
		}
	}
	std::cout << std::endl;
	return 0;
}
