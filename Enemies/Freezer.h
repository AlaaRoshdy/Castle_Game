#pragma once
#include "Enemy.h"
class Freezer :
	public Enemy
{
public:
	Freezer(REGION r_region, int ID, double Health, int ArrivalTime, double Power, int RLD);
	
	virtual void Act() {}
	~Freezer();
};

