// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/08 14:46:44 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/08 20:22:56 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "NinjaTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap(void): ClapTrap() {

	_Hit_points = 60;
	_Max_hit_points = 60;
	_Energy_points = 120;
	_Max_energy_points = 120;
	_Level = 1;
	_Melee_attack_damage = 60;
	_Ranged_attack_damage = 5;
	_Armor_damage_reduction = 0;

	std::cout << "A ninja arises !" << std::endl;
	setName("default");
	return;
}

NinjaTrap::NinjaTrap(std::string const name): ClapTrap(name) {

	_Hit_points = 60;
	_Max_hit_points = 60;
	_Energy_points = 120;
	_Max_energy_points = 120;
	_Level = 1;
	_Melee_attack_damage = 60;
	_Ranged_attack_damage = 5;
	_Armor_damage_reduction = 0;

	std::cout << "A ninja arises !" << std::endl;
	setName(name);
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src): ClapTrap(src) {

	std::cout << "A ninja get copied !" << std::endl;
	*this = src;
	return;
}

NinjaTrap::~NinjaTrap() {

	std::cout << "A ninja disappears in the shadows..." << std::endl;
	return;
}

NinjaTrap &  NinjaTrap::operator=(NinjaTrap const & src) {

	this->_name = src.getName();
	this->_Hit_points = src._Hit_points;
	this->_Max_hit_points = src._Max_hit_points;
	this->_Energy_points = src._Energy_points;
	this->_Max_energy_points = src._Max_energy_points;
	this->_Level = src._Level;
	this->_Melee_attack_damage = src._Melee_attack_damage;
	this->_Ranged_attack_damage = src._Ranged_attack_damage;
	this->_Armor_damage_reduction = src._Armor_damage_reduction;
	return *this;
}

void	NinjaTrap::rangedAttack(std::string const & target) {

	std::cout << "NINJ4-TP " << this->getName() << " attacks " << target << " at range, causing " << this->_Ranged_attack_damage << " points of damage !" << std::endl;
	return;
}

void	NinjaTrap::meleeAttack(std::string const & target) {

	std::cout << "NINJ4-TP " << this->getName() << " attacks " << target << " at melee, ca\
using " << this->_Melee_attack_damage << " points of damage !" << std::endl;
	return;
}

void	NinjaTrap::ninjaShoebox(FragTrap const & target) {

	std::cout << this->getName() << " use Razor Shuriken on " << target.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const & target) {

	std::cout << this->getName() << " use Shadow Slash on " << target.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const & target) {

	std::cout << this->getName() << " use Death Mark on " << target.getName() << std::endl;
}
