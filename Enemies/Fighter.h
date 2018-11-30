#pragma once
#include "Enemy.h"
class Fighter :
	public Enemy
{
public:
	Fighter( REGION r_region, int S, double H, int AT, double P, int RL, int d);
	virtual void Move() {}
	virtual void Act() {}

	 ~Fighter();
};

