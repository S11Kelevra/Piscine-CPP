// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/06 19:39:20 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/06 20:03:01 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_H
# define HUMAN_H

#include <iostream>

class Human
{
	public:
		Human();
		~Human();
		void action(std::string const & action_name, std::string const & target);
	private:
		void meleeAttack(std::string const & target);
		void rangedAttack(std::string const & target);
		void intimidatingShout(std::string const & target);
};

#endif
