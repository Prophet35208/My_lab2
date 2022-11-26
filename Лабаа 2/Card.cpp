#include "Card.h"

Card::Card(int cost)
{
	this->cost= cost;
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

ostream& operator<<(ostream& os, const Card& card)
{
	os << "Стоимость карты= " << card.cost << endl;
	return os;
}
