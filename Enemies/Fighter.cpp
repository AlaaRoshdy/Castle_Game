#include "Fighter.h"



Fighter::Fighter(REGION r_region, int ID, double Health, int ArrivalTime, double Power, int RLD):
	Enemy(FIGHTER_CLR,  r_region, ID, Health, ArrivalTime, Power,  RLD)
{
}


Fighter::~Fighter()
{
}
