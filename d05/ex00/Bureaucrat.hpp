// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/12 14:22:38 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/12 14:22:39 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	public:

		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &);
		~Bureaucrat();
		Bureaucrat &	operator=(Bureaucrat const &);
		void			operator+=(int const num);
		void			operator-=(int const num);

		std::string		getName() const;
		int				getGrade() const;

		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException();
				GradeTooHighException(GradeTooHighException const &);
				~GradeTooHighException() throw();
				GradeTooHighException &		operator=(GradeTooHighException const &);
				virtual const char* what() const throw();
		};

		class GradeTooLowException
		{
			public:
				GradeTooLowException();
				GradeTooLowException(GradeTooLowException const &);
				~GradeTooLowException() throw();
				GradeTooLowException &		operator=(GradeTooLowException const &);
				virtual const char* what() const throw();
			};

	private:

		std::string const	_name;
		int					_grade;
};
std::ostream &	operator<<(std::ostream &, Bureaucrat const &);

#endif
