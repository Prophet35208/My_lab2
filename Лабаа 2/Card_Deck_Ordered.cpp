#include "Card_Deck_Ordered.h"

Card_Deck_Ordered::Card_Deck_Ordered() 
{

}

void Card_Deck_Ordered::Set_Card_On_Top(Card Card)
{
	this->deck.push_back(Card);
}

Card Card_Deck_Ordered::Get_Card_From_Top()
{
	Card buf = this->deck.back();
	this->deck.pop_back();
	return buf ;
}

int Card_Deck_Ordered::Get_Num_All_Cards()
{
	int buf = this->deck.size();
	return buf;
}
