#pragma once
#include "HandSt.h"
typedef struct Player { // Игрок
    int  player_num;
    Hand* hand;
    int current_num_cards;
    int cards_flag[3];
};

// Конструктор Player 

Player* Init_Player(int player_num) {
    Player* ptr;
    ptr = (Player*)malloc(sizeof(Player));
    ptr->hand = Init_Hand();
    ptr->player_num = player_num;
    ptr->current_num_cards = 0;
    for (int i = 0; i < 3; i++) {
        ptr->cards_flag[i] = 0;
    }
    return ptr;
}

// Методы Player

void Set_Card_In_Place_Of_Hand(Player* player_ptr, Card* card_ptr, int hand_place) {
    player_ptr->hand->cards[hand_place - 1] = card_ptr;
    player_ptr->cards_flag[hand_place - 1] = 1;
}
int Get_Sum_Points(Player* player_ptr, Coefficient* coefficient) {
    int sum_points_first = 0, sum_points_final = 0;
    for (int i = 0; i < 3; i++)
    {
        if (player_ptr->cards_flag[i] == 1)
            sum_points_first += player_ptr->hand->cards[i]->cost;
    }
    sum_points_final = (sum_points_first * coefficient->hard_coefficient) + coefficient->soft_coefficient;
    return sum_points_final;
}