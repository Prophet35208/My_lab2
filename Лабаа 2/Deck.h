#include "Card.h"
#pragma once
class Deck // Колода карт.
{
private:
    Card* cards[10]; // Массив карт. 
    int capacity;
    int card_flag[10]; // Следит за тем, имеется ли карта в позиции. 0-если нет, 1-если да
public:
    Deck();
    Deck(int capacity);
    int Get_Num_Cards();
    void Set_Card_In_Place(Card* card_ptr, int place);
    Card* Get_Card_From_Place(int place);
};

