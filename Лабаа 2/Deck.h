#include "Card.h"
#pragma once
class Deck // ������ ����.
{
private:
    Card* cards[10]; // ������ ����. 
    int capacity;
    int card_flag[10]; // ������ �� ���, ������� �� ����� � �������. 0-���� ���, 1-���� ��
public:
    Deck();
    Deck(int capacity);
    int Get_Num_Cards();
    void Set_Card_In_Place(Card* card_ptr, int place);
    Card* Get_Card_From_Place(int place);
};

