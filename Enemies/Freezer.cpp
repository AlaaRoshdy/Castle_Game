#include "Freezer.h"

Freezer::Freezer(REGION r_region, int ID, double Health, int ArrivalTime, double Power, int RLD) :Enemy(FREEZER_CLR, r_region, ID, Health, ArrivalTime, Power, RLD)
{
}

Freezer::~Freezer()
{
}
