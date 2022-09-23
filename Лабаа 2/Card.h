#pragma once
class Card // Карта. 
{
private: 
	int cost;
public:
	Card(int cost);
	Card();
	int Get_Cost();
	void Set_Cost(int cost);
};

