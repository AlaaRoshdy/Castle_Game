#include "Tower.h"


Tower::Tower()
{
	//SetHealth(TowerInitHealth);
	NoOfAttacked = 0;
}

string Tower::update_msg()
{
	string s = "";
	s += "Health is: " + to_string(Health) + ", Power is: " + to_string(Power) + ", and Total killed is: " + to_string(NoOfAttacked);

	return s;
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

void Tower::Attack(LinkedList& EnemyRegion,LinkedList& AllEnemies)
{
	Heap EnemyPriority(MaxEnemyCount);
	 MakeHeap(EnemyRegion, EnemyPriority);
	//each time step, the tower kills several enemies.NoOfattack is the number of enemies to kill.
	for (int i = 0; i < NoOfAttacks; i++)
	{
		HeapItem * ToDelete = EnemyPriority.Dequeue();
		if (ToDelete) {
			NoOfAttacked++;
			AllEnemies.DeleteNode(ToDelete->getData());
		}
	}
}

int Tower::getNoOfAttacks()
{
	return NoOfAttacks;
}
