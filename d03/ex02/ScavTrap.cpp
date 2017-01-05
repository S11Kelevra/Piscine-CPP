// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/08 14:46:44 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/08 20:22:56 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"
#include <iostream>
#include <cstdlib>

ScavTrap::ScavTrap(void): ClapTrap() {

	_Energy_points = 50;
	_Max_energy_points = 50;
	_Melee_attack_damage = 20;
	_Ranged_attack_damage = 15;
	_Armor_damage_reduction = 3;

	std::cout << "I LIVE!" << std::endl;
	setName("default");
	return;
}

ScavTrap::ScavTrap(std::string const name): ClapTrap(name) {

	_Energy_points = 50;
	_Max_energy_points = 50;
	_Melee_attack_damage = 20;
	_Ranged_attack_damage = 15;
	_Armor_damage_reduction = 3;

	std::cout << "My name is Trap, Claptrap, 00...Trap." << std::endl;
	setName(name);
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src): ClapTrap(src) {

	std::cout << "Enterrrrr the CHAMPION!" << std::endl;
	*this = src;
	return;
}

ScavTrap::~ScavTrap() {

	std::cout << "I'll die as I lived: annoying!" << std::endl;
	return;
}

ScavTrap &  ScavTrap::operator=(ScavTrap const & src) {

	std::cout << "Defragmenting!" << std::endl;
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

void	ScavTrap::rangedAttack(std::string const & target) {

	std::cout << "SC4V-TP " << this->getName() << " attacks " << target << " at range, causing " << this->_Ranged_attack_damage << " points of damage !" << std::endl;
	return;
}

void	ScavTrap::meleeAttack(std::string const & target) {

	std::cout << "SC4V-TP " << this->getName() << " attacks " << target << " at melee, causing " << this->_Melee_attack_damage << " points of damage !" << std::endl;
	return;
}

void	ScavTrap::challengeNewcomer() {

	std::string		specialChallenge[] = {"jump", "climb stairs", "find his G-Spot", "lick his elbow", "do a barrel roll"};

	if (this->_Energy_points > 0) {
		this->_Energy_points -= 25;
		std::cout << "SC4V-TP " << this->_name << " tries to " << specialChallenge[(rand() % 5)] << " and fail pathetically, he has now " << this->_Energy_points << " energy points left !" << std::endl;
	} else {
		std::cout << "SC4V-TP " << this->_name << " is too tired !" << std::endl;
	}
}
