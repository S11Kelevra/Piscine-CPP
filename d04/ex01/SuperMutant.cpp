#include <iostream>
#include "SuperMutant.hpp"
class Enemy;

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src) : Enemy(src._HP, src._type){
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh ..." << std::endl;
}

void 		SuperMutant::takeDamage(int damage) {
	return Enemy::takeDamage(damage - 3);
}
