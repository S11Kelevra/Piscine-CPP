// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: nfruneau <nfruneau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/04/11 18:00:04 by nfruneau          #+#    #+#             //
//   Updated: 2015/04/11 21:29:18 by nfruneau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ISpaceMarine.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"
#include "ISquad.hpp"
#include <iostream>

int main(void)
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	TacticalMarine* lor = new TacticalMarine();
	ISpaceMarine* lor2 = new TacticalMarine(*lor);
	ISquad* vla = new Squad;
	vla->push(bob);
	vla->push(jim);
	vla->push(lor2);
	vla->push(bob);
	lor2 = jim;
	vla->push(lor2);
	ISquad* vlc = vla;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}
