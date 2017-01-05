

#include <iostream>
#include "PowerFist.hpp"

class AWeapon;

PowerFist::PowerFist(PowerFist const & src) : AWeapon(src){

}

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50){

}

PowerFist::~PowerFist() {

}

void			PowerFist::attack() const{
	std::cout<< "* pschhh... SBAM! *" << std::endl;
}
