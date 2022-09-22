#include "Card.h"

Card::Card(int cost)
{
	this->cost=cost;
}

int Card::Get_Cost()
{
	return this->cost;
}
