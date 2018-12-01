#include "Tower.h"


Tower::Tower()
{
	//SetHealth(TowerInitHealth);
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

Heap Tower::MakeHeap(LinkedList EnemyRegion)
{
	Heap EnemyPriority;
	EnemyRegion.ToHeap(EnemyPriority);
	return EnemyPriority;
}

void Tower::Attack(LinkedList EnemyRegion)
{
	Heap EnemyPriority;
	EnemyPriority = MakeHeap(EnemyRegion);
	//each time step, the tower kills 3 enemies.
	for (int i = 0; i < NoOfAttacks; i++)
	{
		EnemyPriority.Dequeue();
	}
}
