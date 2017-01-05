// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.hpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/12 21:36:50 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/12 21:47:35 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm( void );
    PresidentialPardonForm( std::string target );
    PresidentialPardonForm( PresidentialPardonForm const & src );
    void execute(Bureaucrat const & executor) const;
    ~PresidentialPardonForm();
    
    PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs );
};

#endif
