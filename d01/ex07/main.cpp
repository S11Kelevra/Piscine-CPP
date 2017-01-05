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

#include <iostream>
#include <fstream>

std::string 	ft_capitalize(std::string str)
{
	std::string 	str2;

	for (size_t i = 0; i < str.size(); i++)
		str2 += toupper(str[i]);
	return str2;
}

void	ft_replace(char **argv)
{
	std::string 	str1;
	std::string 	str2;
	std::string 	newfile;
	std::ofstream	file2;
	std::ifstream	file;
	std::streampos	size;

	newfile = ft_capitalize(argv[1]);
	newfile += ".replace";
	file2.open(newfile);
	str1 = argv[2];
	str2 = argv[3];
	file.open(argv[1]);
	if (file.is_open())
	{
		//could also do:
		//std::stringstream buffer;
		//buffer << t.rdbuf();
		//buffer.str();
		file.seekg(0, std::ios::end);
		size = file.tellg();
		std::string	buffer(size, ' ');
		file.seekg(0, std::ios::beg);
		file.read(&buffer[0], size);
		while (buffer.find(str1) != (size_t)-1)
			buffer.replace(buffer.find(str1), str1.length(), str2);
		file2 << buffer;
		file.close();
	}
	else
		std::cout << "Error: Unable to open file." << std::endl;
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Error: usage: ./replace <Filename> <string1> <string2>" << std::endl;
	else
		ft_replace(argv);
	return (0);
}