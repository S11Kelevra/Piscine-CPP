// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   mutantstack.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/15 13:38:50 by nfruneau          #+#    #+#             //
//   Updated: 2015/01/15 13:38:51 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <stack>

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		typedef    std::stack<T> base;

	public:
		MutantStack(void) {}
		~MutantStack(void) {}
		MutantStack(MutantStack const & o): base(o) {}
		typedef typename base::container_type::iterator iterator;
		using		base::operator=;

		iterator	begin() { return base::c.begin(); }
		iterator	end() { return base::c.end() ; }
};


#endif