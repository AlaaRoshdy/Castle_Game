#pragma once
#include "Enemy.h"
class Fighter :
	public Enemy
{
public:
	Fighter(REGION r_region, int ID, double Health, int ArrivalTime, double Power, int RLD);
	virtual void Move() {}
	virtual void Act() {}

	 ~Fighter();
};