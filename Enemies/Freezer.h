#pragma once
#include "Enemy.h"
class Freezer :
	public Enemy
{
public:
	Freezer(REGION r_region, int S, double H, int AT, double P, int RL, int d);
	virtual void Move() {}
	virtual void Act() {}
	~Freezer();
};

