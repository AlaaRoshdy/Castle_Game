#include "Tower.h"


Tower::Tower()
{
	SetHealth(TowerInitHealth);
}


void Tower::SetHealth(double h)
{
	if(h > 0)
		Health = h;
	else
		Health = 0; // killed
}

double Tower::GetHealth() const
{
	return Health;
}
void Tower::SetNoOfAttacks(int N)
{
	NoOfAttacks = N;
}
void Tower::SetPower(double P)
{
	Power = P;
}

void Tower::MakeHeap()
{

}

void Tower::Attack(LinkedList EnemyRegion)
{
	MakeHeap();

}
