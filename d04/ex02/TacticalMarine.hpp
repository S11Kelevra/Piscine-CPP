// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   TacticalMarine.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/11 17:06:51 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/11 17:07:02 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{

public:
	TacticalMarine( void );
	TacticalMarine( TacticalMarine const & src );
	~TacticalMarine( void );
	void	battleCry() const;
	void	rangedAttack() const;
	void	meleeAttack() const;
	ISpaceMarine* clone( void ) const;

	TacticalMarine& operator=(TacticalMarine const & rhs);
};

#endif
