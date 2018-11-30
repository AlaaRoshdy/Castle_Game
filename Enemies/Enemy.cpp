#include "Enemy.h"


Enemy::Enemy(color r_c, REGION r_region, int d)
{
	Clr = r_c;
	Region = r_region;
	SetDistance(d);
}

Enemy::~Enemy()
{
}

color Enemy::GetColor() const
{
	return Clr;
}

REGION Enemy::GetRegion() const
{
	return Region;
}

void Enemy::DecrementDist()
{
	if (Distance > MinDistance)
		Distance--;
}

void Enemy::SetDistance(int d)
{
	if (d >= MinDistance && d <= MaxDistance)
		Distance = d;
	else
		Distance = MaxDistance;
}

int Enemy::GetDistance() const
{
	return Distance;
}

ENEMY Enemy::getType()
{
	return type;
}

void Enemy::setType(ENEMY T)
{
	type = T;
}

void Enemy::setState(State s)
{
	state = s;
}

State Enemy::getState()
{
	return state;	
}

void Enemy::updateState()
{
		if(Health<=0)
		{
			state = killed;
		}
}

void Enemy::hit()
{
	int k;
	if (Health >= 0.5) k = 1;
	else k = 0.5;
	Health = Health * k / Distance;
}