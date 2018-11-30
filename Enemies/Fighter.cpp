#include "Fighter.h"



Fighter::Fighter(REGION r_region, int S, double H, int AT, double P, int RL, int d): 
	Enemy(FIGHTER_CLR,  r_region,  S,  H,  AT,  P,  RL,  d)
{
}


Fighter::~Fighter()
{
}
