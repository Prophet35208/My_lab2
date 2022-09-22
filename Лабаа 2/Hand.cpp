#include "Hand.h"

Hand::Hand()
{
	this->current_num_cards = 0;
	for (int i = 0; i < 3; i++) {
		this->cards_flag[i] = 0;

	}
	for (int i = 0; i < 3; i++)
	{
		this->cards[i] = nullptr;
	}

}

void Hand::Set_Card_In_Place_Of_Hand(Card* card_ptr, int hand_place)
{
	this->cards[hand_place - 1] = card_ptr;
	this->cards_flag[hand_place - 1] = 1;
}

int Hand::Check_If_Card_In_Place(int place)
{
	if (this->cards_flag[place] == 1)
		return 1;
	else
		return 0;
}

int Hand::Get_Cost_From_Card_In_Place(int place)
{
	return this->cards[place]->Get_Cost();
}
