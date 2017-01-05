// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Squad.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/11 15:06:53 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/11 17:58:18 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{
typedef struct s_list
{
	ISpaceMarine	*instance;
	s_list			*next;
}				t_list;

private:
	int		_nb;
	t_list	*_list;

public:

	Squad( void );
	Squad( Squad const & src );
	~Squad( void );

	int		getCount() const;
	ISpaceMarine*	getUnit( int index ) const;
	int		push( ISpaceMarine* sm );
	
	Squad& operator=(Squad const & rhs);
};

#endif
