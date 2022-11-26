#pragma once
#include <vector>    
#include "Card.h"
using namespace std;
class Card_Deck_Ordered
{
private:
	vector <Card> deck; 
public:
	Card_Deck_Ordered();
	void Set_Card_On_Top(Card);
	Card Get_Card_From_Top();
	int Get_Num_All_Cards();
};

