

#include <iostream>
#include "AWeapon.hpp"

#ifndef PLASMARIFLE_HPP
 #define PLASMARIFLE_HPP
class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle(PlasmaRifle const & src);
		PlasmaRifle();
		~PlasmaRifle();
		using AWeapon::operator=;

		void			attack() const;
};
#endif
