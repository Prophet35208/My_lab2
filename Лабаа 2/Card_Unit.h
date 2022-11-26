#pragma once
#include "Card.h"
class Card_Unit : public Card
{
private:
	int health;
public:
	Card_Unit(int cost,int healt);
};

