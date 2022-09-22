#include "Card.h"
#pragma once
class Hand
{
private:
	Card* cards[3];
	int current_num_cards;
	int cards_flag[3];
public:
	Hand();
	void Set_Card_In_Place_Of_Hand(Card* card_ptr, int hand_place);
	int Check_If_Card_In_Place(int place);
	int Get_Cost_From_Card_In_Place(int place);
};

