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

void Tower::MakeHeap(const LinkedList& EnemyRegion,Heap& EnemyPriority)
{
	EnemyRegion.ToHeap(EnemyPriority);
	return ;
}

void Tower::Attack(LinkedList& EnemyRegion)
{
	Heap EnemyPriority(MaxEnemyCount);
	 MakeHeap(EnemyRegion, EnemyPriority);
	//each time step, the tower kills several enemies.NoOfattack is the number of enemies to kill.
	for (int i = 0; i < NoOfAttacks; i++)
	{
		HeapItem * ToDelete = EnemyPriority.Dequeue();
		if (ToDelete)
			EnemyRegion.DeleteNode(ToDelete->getData());
	}
}
