#pragma once
#include "Enemy.h"
class Healer :
	public Enemy
{
public:
	Healer(REGION r_region, int ID, double Health, int ArrivalTime, double Power, int RLD);
	virtual void Move() {}
	virtual void Act() {}
	 ~Healer();
};

