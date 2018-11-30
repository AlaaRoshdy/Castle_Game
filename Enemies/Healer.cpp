#include "Healer.h"



Healer::Healer(REGION r_region, int ID, double Health, int ArrivalTime, double Power, int RLD):
	Enemy(HEALER_CLR, r_region, ID, Health, ArrivalTime, Power, RLD)
{
}


Healer::~Healer()
{
}
