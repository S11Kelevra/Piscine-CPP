// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/12 12:13:30 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/12 17:18:53 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef Intern_HPP
# define Intern_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Intern 
{

public:
	Intern(void);
	Intern(Intern const & src);
	~Intern(void);
	Intern & operator=( Intern const &);

	Form * makeForm(std::string form, std::string target);
};

#endif
