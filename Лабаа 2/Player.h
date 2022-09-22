#include "Hand.h"
#include "Coefficient.h"
#pragma once
class Player
{
private:
	int  player_num;
public:
	Hand hand;
	Player(int player_num);
	int Get_Sum_Points(Coefficient* coefficient);
};

