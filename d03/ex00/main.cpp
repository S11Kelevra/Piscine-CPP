// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/08 15:29:06 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/08 20:21:44 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include <cstdlib>
#include <iostream>

int		main() {

	std::cout << "---> Create 2 robots (default and copy):" << std::endl;
	FragTrap	robot1("Steven");
	FragTrap	robot2(robot1);

	srand(time(NULL));
	robot2.setName("Bob");

	std::cout << std::endl << "---> Fight with basic attacks:" << std::endl;
	robot1.rangedAttack("Bob");
	robot2.takeDamage(20);
	robot1.meleeAttack("Bob");
	robot2.takeDamage(30);

	std::cout << std::endl << "---> Kill one of the robots:" << std::endl;
	robot2.takeDamage(105);
	robot2.takeDamage(105);

	std::cout << std::endl << "---> Heal one of the robots:" << std::endl;
	robot2.beRepaired(100);
	robot2.beRepaired(100);

	std::cout << std::endl << "---> Use random special attacks:" << std::endl;
	robot2.vaulthunter_dot_exe("Steven");
	robot2.vaulthunter_dot_exe("Steven");
	robot2.vaulthunter_dot_exe("Steven");
	robot2.vaulthunter_dot_exe("Steven");
	robot2.vaulthunter_dot_exe("Steven");
	robot1.takeDamage(1);

	std::cout << std::endl << "---> End of treatment." << std::endl;
	return 0;
}
