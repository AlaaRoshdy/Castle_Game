#pragma once
#include "Enemy.h"
class Healer :
	public Enemy
{
public:
	Healer(REGION r_region, int S, double H, int AT, double P, int RL, int d);
	virtual void Move() {}
	virtual void Act() {}
	 ~Healer();
};

