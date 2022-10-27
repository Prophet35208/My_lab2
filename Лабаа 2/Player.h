#pragma once
#include <iostream>
#include "Hand.h"
#include "Coefficient.h"
using namespace std;
class Player
{
	friend ostream& operator<<(ostream& os, const Player& dt);
private:
	int  player_num; 
	static int num_all_players; // ќбщее кол-во игроков в игре
	Hand hand;
public:
	Player(int player_num);
	int Get_Sum_Points(Coefficient* coefficient);
	static int Get_Num_All_Players();
	int* Return_Copy_Num_Player_Adress();
	int& Return_Num_PLayer_Ssulka_Ssulka();

	~Player();
};
