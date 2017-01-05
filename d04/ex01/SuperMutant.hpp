#include "Enemy.hpp"


#ifndef SUPERMUTANT_HPP
 #define SUPERMUTANT_HPP

class SuperMutant : public Enemy
{

public:
	SuperMutant();
	SuperMutant(SuperMutant const &);
	~SuperMutant();
	using Enemy::operator=;
	void 		takeDamage(int);	
};

#endif