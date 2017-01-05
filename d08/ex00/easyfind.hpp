// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   easyfind.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/15 13:38:50 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/15 13:38:51 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <stdexcept>
#include <algorithm>
#include <iostream>

template < typename T >
int		easyfind( T & x, int y)
{
	typename T::iterator	it = std::find(x.begin(), x.end(), y);
	if (it != x.end())
			return *it;
	throw std::logic_error("No occurence found.");
}

#endif