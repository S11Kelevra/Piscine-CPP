// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.cpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/12 21:36:46 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/12 21:36:47 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm( void ) : Form()
{

}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form()
{
	this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) : Form()
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{

}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if (this != &rhs)
		return *this;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= 5 && this->getSign() == true)
		std::cout << this->getTarget() << " has been pardonned by Zafod Beeblebrox." << std::endl;
	else if (this->getSign() == false)
		std::cout << "The form isn't signed yet." << std::endl;
	else
		throw Form::GradeTooLowException();
}
