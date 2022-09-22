#include "Hand.h"
#include "Coefficient.h"
#pragma once
class Player
{
private:
	int  player_num;
	Hand hand;
public:
	Player();
	int Get_Sum_Points(Coefficient* coefficient);
};

