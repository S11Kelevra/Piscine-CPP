// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/08 14:46:44 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/08 20:22:56 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SuperTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap(void): FragTrap(), NinjaTrap() {

	_Hit_points = 100;
	_Max_hit_points = 100;
	_Energy_points = 120;
	_Max_energy_points = 120;
	_Level = 1;
	_Melee_attack_damage = 60;
	_Ranged_attack_damage = 20;
	_Armor_damage_reduction = 5;

	std::cout << "new supertrap" << std::endl;
	setName("default");
	return;
}

SuperTrap::SuperTrap(std::string const name): FragTrap(name), NinjaTrap(name) {

	_Hit_points = 100;
	_Max_hit_points = 100;
	_Energy_points = 120;
	_Max_energy_points = 120;
	_Level = 1;
	_Melee_attack_damage = 60;
	_Ranged_attack_damage = 20;
	_Armor_damage_reduction = 5;

	std::cout << "new named supertrap" << std::endl;
	setName(name);
	return;
}

SuperTrap::SuperTrap(SuperTrap const & src): FragTrap(src), NinjaTrap(src) {

	std::cout << "new supertrap copied" << std::endl;
	*this = src;
	return;
}

SuperTrap::~SuperTrap() {

	std::cout << "dead supertrap" << std::endl;
	return;
}

SuperTrap &  SuperTrap::operator=(SuperTrap const & src) {

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

void	SuperTrap::rangedAttack(std::string const & target) {

	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target) {

	NinjaTrap::rangedAttack(target);
}
