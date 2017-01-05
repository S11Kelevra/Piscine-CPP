

#include <iostream>
#include "PlasmaRifle.hpp"

class AWeapon;

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) : AWeapon(src){

}

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21){

}

PlasmaRifle::~PlasmaRifle() {

}

void			PlasmaRifle::attack() const{
	std::cout<< "* piouuu piouuu piouuu *" << std::endl;
}

// ************************************************************************** //
