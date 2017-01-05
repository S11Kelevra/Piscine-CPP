

#include <iostream>
#include "AWeapon.hpp"

AWeapon::AWeapon() : _name(""), _apcost(0), _damage(0){

}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
							_name(name), _apcost(apcost), _damage(damage){

}

AWeapon::AWeapon(AWeapon const & src) : _name(src._name), _apcost(src._apcost), _damage(src._damage){

}

AWeapon::~AWeapon(){

}

AWeapon &		AWeapon::operator=(AWeapon const & rhs){
	if (this != &rhs) {
		_name = rhs._name;
		_apcost = rhs._apcost;
		_damage = rhs._damage;
	}
	return *this;
}


std::string const & AWeapon::getName() const {
	return _name;
}

int AWeapon::getAPCost() const {
	return _apcost;
}

int AWeapon::getDamage() const {
	return _damage;
}



// ************************************************************************** //
