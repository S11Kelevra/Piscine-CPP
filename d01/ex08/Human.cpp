// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/06 18:56:40 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/06 20:02:20 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"
#include <iostream>
#include <map>
Human::Human(void) {}

Human::~Human() {}

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "Use melee attack on " + target << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "Use ranged attack on " + target << std::endl;

}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "Use FUS RO DAAAAH !! on " + target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	typedef void(Human::*myfunc)(std::string const &);
	std::map <std::string, myfunc> myMap;
	myMap.insert(std::make_pair("ma" , &Human::meleeAttack));
	myMap.insert(std::make_pair("ra" , &Human::rangedAttack));
	myMap.insert(std::make_pair("is" , &Human::intimidatingShout));

    myfunc fct = myMap[action_name];
    (this->*fct)(target);
}