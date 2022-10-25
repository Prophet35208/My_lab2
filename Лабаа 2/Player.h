#pragma once
#include "Hand.h"
#include "Coefficient.h"
class Player
{
private:
	int  player_num; 
	static int num_all_players; // ќбщее кол-во игроков в игре
public:
	Hand hand;
	Player(int player_num);
	int Get_Sum_Points(Coefficient* coefficient);
	static int Get_Num_All_Players();
	int* Return_Copy_Num_Player_Adress();
	int& Return_Num_PLayer_Ssulka_Ssulka();
	~Player();
};
