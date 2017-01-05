#include "Enemy.hpp"

#ifndef RADSCORPION_HPP
 #define RADSCORPION_HPP

class RadScorpion : public Enemy
{

public:
	RadScorpion();
	RadScorpion(RadScorpion const &);
	~RadScorpion();
	using Enemy::operator=;
};

#endif