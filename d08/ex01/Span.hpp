// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Span.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/15 13:38:50 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/15 13:38:51 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>

class Span
{

public:

	Span();
	Span(unsigned int n);
	Span(Span const &);
	~Span();
	Span &	operator=(Span const &);

	void	addNumber(int n);
	int		shortestSpan();
	int		longestSpan();

private:	
	std::vector<int>	_v;
};

#endif