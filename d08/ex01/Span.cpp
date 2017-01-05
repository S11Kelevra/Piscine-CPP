// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Span.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/15 13:38:50 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/15 13:38:51 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Span.hpp"
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <numeric>

#include <iostream>

Span::Span() {
	_v.reserve(0);
}

Span::Span( unsigned int n ) {

	_v.reserve(n);
}

Span::Span( Span const & src ) {

	*this = src;
}

Span::~Span() {}

Span &	Span::operator=( Span const & rhs ) {

	this->_v = rhs._v;
	return *this;
}

void	Span::addNumber( int n ) {

	if ( this->_v.size() < this->_v.capacity() )
		this->_v.push_back(n);
	else
		throw std::overflow_error("Error : container is full.");
}

void displayInt(int i) {
	std::cout << i << std::endl;
}

int	Span::shortestSpan() {

	std::vector<int> 	cpy = _v;

    std::sort(cpy.begin(), cpy.end());
	std::adjacent_difference(cpy.begin(), cpy.end(), cpy.begin() - 1);
	cpy.pop_back();
    return (cpy[std::distance(cpy.begin(), std::min_element(cpy.begin(), cpy.end()))]);
}

int	Span::longestSpan() {

	std::vector<int>::iterator	min = std::min_element(_v.begin(), _v.end());
	std::vector<int>::iterator	max = std::max_element(_v.begin(), _v.end());

	return (_v[std::distance(_v.begin(), max)] - _v[std::distance(_v.begin(), min)]);
}
