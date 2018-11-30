#include "Healer.h"



Healer::Healer(REGION r_region, int S, double H, int AT, double P, int RL, int d):
	Enemy(HEALER_CLR, r_region, S, H, AT, P, RL, d)
{
}


Healer::~Healer()
{
}
