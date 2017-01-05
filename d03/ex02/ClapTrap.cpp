// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/08 14:46:44 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/08 20:22:56 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"
#include <iostream>
#include <cstdlib>

ClapTrap::ClapTrap(void): _Hit_points(100), _Max_hit_points(100), _Level(1) {

	std::cout << "New clap-trap" << std::endl;
	setName("default");
	return;
}

ClapTrap::ClapTrap(std::string const name): _Hit_points(100), _Max_hit_points(100), _Level(1) {

	std::cout << "New named clap-trap" << std::endl;
	setName(name);
	return;
}

ClapTrap::ClapTrap(ClapTrap const & src) {

	std::cout << "New copied clap-trap" << std::endl;
	*this = src;
	return;
}

ClapTrap::~ClapTrap() {

	std::cout << "Dead clap-trap" << std::endl;
	return;
}

void	ClapTrap::setName(std::string const name) {

	this->_name = name;
	return;
}

std::string		ClapTrap::getName(void) const {

	return (this->_name);
}

ClapTrap &  ClapTrap::operator=(ClapTrap const & src) {

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

void    ClapTrap::takeDamage(unsigned int amount) {

	int		hit_points;

	if (this->_Hit_points == 0) {
		std::cout << "Cl4P-TP " << this->getName() << " can't take any more damage !" << std::endl;
	} else if ((int)amount <= this->_Armor_damage_reduction) {
		std::cout << "CL4P-TP " << this->getName() << " didn't feel anything !" << std::endl;
	} else {
		if ((hit_points = this->_Hit_points + this->_Armor_damage_reduction - amount) < 0)
			hit_points = 0;
		std::cout << "CL4P-TP " << this->getName() << " take " << amount << " damage, and has now " << hit_points << " hit points." << std::endl;
		this->_Hit_points = hit_points;
	}
	return;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	int		hit_points;

	if (this->_Hit_points == this->_Max_hit_points) {
		std::cout << "CL4P-TP "<< this->getName() << " is already full health !" <<  std::endl;
	} else {
		if ((hit_points = this->_Hit_points + amount) > 100)
			hit_points = 100;
		std::cout << "CL4P-TP " << this->getName() << " is repaired by " << amount << " points, and has now " << hit_points << " hit points." << std::endl;
		this->_Hit_points = hit_points;
	}
	return;
}
