// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RobotomyRequestForm.hpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/12 21:36:23 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/12 21:47:24 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef  ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm( void );
    RobotomyRequestForm( std::string target );
    RobotomyRequestForm( RobotomyRequestForm const & src );
    void execute(Bureaucrat const & executor) const;
    ~RobotomyRequestForm();
    
    RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs );
};

#endif
