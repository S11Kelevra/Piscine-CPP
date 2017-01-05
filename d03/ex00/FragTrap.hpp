// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/08 14:47:45 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/08 19:18:08 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>

class FragTrap {

public:

	FragTrap(void);
    FragTrap(std::string const name);
	FragTrap(FragTrap const & src);
    ~FragTrap(void);

	FragTrap &	operator=(FragTrap const &);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
	void	setName(std::string const name);
	std::string		getName(void) const;

private:

	int		_Hit_points;
	int		_Max_hit_points;
	int		_Energy_points;
	int		_Max_energy_points;
	int		_Level;
	int		_Melee_attack_damage;
	int		_Ranged_attack_damage;
	int		_Armor_damage_reduction;
	std::string	_name;
};

#endif
