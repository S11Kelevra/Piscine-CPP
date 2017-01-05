

#include <iostream>
#include "AWeapon.hpp"


#ifndef POWERFIST_HPP
 #define POWERFIST_HPP
class PowerFist  : public AWeapon
{
	public:
		PowerFist(PowerFist const & src);
		PowerFist();
		~PowerFist();
		using AWeapon::operator=;

		void			attack() const;
};
#endif
