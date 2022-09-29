#pragma once
#include <iostream>
#include "CardSt.h"
typedef struct Deck { // ������ ����.
    Card* cards[10]; // ������ ����. 
    int capacity;
    int card_flag[10]; // ������ �� ���, ������� �� ����� � �������. 0-���� ���, 1-���� ��
};

// ������������ Deck
Deck* Init_Deck() { // �� ���������. ������ 10
    Deck* ptr;
    ptr = (Deck*)malloc(sizeof(Deck));
    ptr->capacity = ptr->capacity;
    for (int i = 0; i < 10; i++)
    {
        ptr->card_flag[i] = 0;
    }
    return ptr;
}
Deck* Init_Deck(int capacity) { // ������ �� ������
    Deck* ptr;
    ptr = (Deck*)malloc(sizeof(Deck));
    ptr->capacity = capacity;
    for (int i = 0; i < ptr->capacity; i++)
    {
        ptr->card_flag[i] = 0;
    }
    return ptr;
}
// ������ Deck
int Get_Num_Cards(Deck* deck_ptr) {// ��������� ���-�� ���� � ������
    int num = 0;
    for (int i = 0; i < deck_ptr->capacity; i++) {
        if (deck_ptr->card_flag[i] != 0)
            num++;
    }
    return num;
}
void Set_Card_In_Place(Deck* deck_ptr, Card* card_ptr, int place) {// ���������� ����� � ����������� �����
    deck_ptr->cards[place - 1] = card_ptr;
}
Card* Get_Card_From_Place(Deck* deck_ptr, int place) {
    deck_ptr->card_flag[place - 1] = 0;
    return deck_ptr->cards[place - 1];
}