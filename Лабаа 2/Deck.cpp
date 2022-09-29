#include "Deck.h"

Deck::Deck()
{
    this->capacity = 5;
    for (int i = 0; i < 10; i++)
    {
        this->card_flag[i] = 0;
    }
}

Deck::Deck(int capacity)
{
    this->capacity = capacity;
    for (int i = 0; i < capacity; i++)
    {
        this->card_flag[i] = 0;
    }
}

int Deck::Get_Num_Cards()
{
    int num = 0;
    for (int i = 0; i < this->capacity; i++) {
        if (this->card_flag[i] != 0)
            num++;
    }
    return num;
}

void Deck::Set_Card_In_Place(Card* card_ptr, int place)
{
    this->cards[place - 1] = card_ptr;
    this->card_flag[place - 1] = 1;
}

Card* Deck::Get_Card_From_Place(int place)
{
    this->card_flag[place - 1] = 0;
    return this->cards[place - 1];
}
