#pragma once
#include "CardSt.h"
typedef struct Hand {// Рука игрока. Макс размер -- 3.
    Card* cards[3];
    int cards_flag[3];
};
Hand* Init_Hand() {
	Hand* hand_ptr;
	hand_ptr = (Hand*)malloc(sizeof(Hand));
	for (int i = 0; i < 3; i++)
	{
		hand_ptr->cards_flag[i] = 0;
	}
	return hand_ptr;
}