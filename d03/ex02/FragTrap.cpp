// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/08 14:46:44 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/08 20:22:56 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include <iostream>
#include <cstdlib>

FragTrap::FragTrap(void): ClapTrap() {

	_Energy_points = 100;
	_Max_energy_points = 100;
	_Melee_attack_damage = 30;
	_Ranged_attack_damage = 20;
	_Armor_damage_reduction = 5;

	std::cout << "Look out everybody! Things are about to get awesome!" << std::endl;
	setName("default");
	return;
}

FragTrap::FragTrap(std::string const name): ClapTrap(name) {

	_Energy_points = 100;
	_Max_energy_points = 100;
	_Melee_attack_damage = 30;
	_Ranged_attack_damage = 20;
	_Armor_damage_reduction = 5;

	std::cout << "Let's get this party started!" << std::endl;
	setName(name);
	return;
}

FragTrap::FragTrap(FragTrap const & src): ClapTrap(src) {

	std::cout << "Hey everybody! Check out my package!" << std::endl;
	*this = src;
	return;
}

FragTrap::~FragTrap() {

	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
	return;
}

FragTrap &  FragTrap::operator=(FragTrap const & src) {

	std::cout << "Recompiling my combat code!" << std::endl;
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

void	FragTrap::rangedAttack(std::string const & target) {

	std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at range, causing " << this->_Ranged_attack_damage << " points of damage !" << std::endl;
	return;
}

void	FragTrap::meleeAttack(std::string const & target) {

	std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at melee, causing " << this->_Melee_attack_damage << " points of damage !" << std::endl;
	return;
}

void    FragTrap::vaulthunter_dot_exe(std::string const & target) {

	std::string		specialAttacks[] = {"Splash Attack", "Meteor Punches", "Kamehameha", "Elephant Gatling", "Konoha Senpu"};

	if (this->_Energy_points > 0) {
		this->_Energy_points -= 25;
		std::cout << "FR4G-TP " << this->_name << " uses " << specialAttacks[(rand() % 5)] << " on " << target << " and has now " << this->_Energy_points << " energy points left !" << std::endl;
	} else {
		std::cout << "FR4G-TP " << this->_name << " is exhausted !" << std::endl;
	}
}
