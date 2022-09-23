#include "Card.h"

Card::Card(int cost)
{
	this->cost=cost;
}

Card::Card()
{
	this->cost = 1;
}

int Card::Get_Cost()
{
	return this->cost;
}

void Card::Set_Cost(int cost)
{
	this->cost = cost;
}
