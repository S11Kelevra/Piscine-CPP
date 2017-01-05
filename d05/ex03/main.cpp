// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/12 13:07:36 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/13 00:49:46 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <cstdlib>

int main( void )
{
	std::cout << "/************ Intern Creation ************\\" << std::endl << std::endl;

	Intern someRandomIntern;

	Form* rrf;
	Form* scf;
	Form* ppf;
	
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << "Target: " << rrf->getTarget() << std::endl;
	scf = someRandomIntern.makeForm("shrubbery creation", "Bobby");
	std::cout << "Target: " << scf->getTarget() << std::endl;
	ppf = someRandomIntern.makeForm("presidential pardon", "Billy");
	std::cout << "Target: " << ppf->getTarget() << std::endl;

	delete rrf;
	delete scf;
	delete ppf;

	return (0);
}
