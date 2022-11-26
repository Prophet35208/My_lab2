#pragma once
#include <iostream>
using namespace std;
class Card // Карта. 
{
protected:
	int cost;
public:
	Card(int cost);
	Card();
	int Get_Cost();
	void Set_Cost(int cost);
	friend ostream& operator<<(ostream& os, const Card& dt);
};