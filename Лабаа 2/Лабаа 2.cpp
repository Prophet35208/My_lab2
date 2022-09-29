#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "CardSt.h"
#include "DeckSt.h"
#include "CoefficientSt.h"
#include "HandSt.h"
#include "PlayerSt.h"

int main()
{
    setlocale(LC_ALL, "rus");
    // Создадим колоду вместимостью 5 карт
    printf("Создадим колоду вместимостью 5 карт\n");
    Deck* my_deck;
    my_deck = Init_Deck(5);    
    // Посмотрим кол-во карт в колоде (не макс. их кол-во)
    printf("Посмотрим кол-во карт в колоде, созданную вначале \n");
    int num;
    num = Get_Num_Cards(my_deck);
    printf("Кол-во кард в колоде: %d\n", num);
    // Добавим карту 5 в позицию 1, и карту 2 в позицию 4.
    printf("Добавим карту 5 в позицию 1, и карту 2 в позицию 4\n");
    Card* first_card, *second_card;
    first_card = Init_Card(5);
    second_card = Init_Card(2);
    Set_Card_In_Place(my_deck,first_card, 1);
    Set_Card_In_Place(my_deck,second_card, 4);
    printf("Карты добавили, теперь глянем сколько их всего \n");
    num = Get_Num_Cards(my_deck);
    printf("Кол-во кард в колоде: %d\n", num);
    printf("\n");
    // Теперь создадим игрока №1 с его игровой рукой. Пока что она пустая
    printf("Теперь создадим игрока №1 с его игровой рукой. Пока что она пустая\n");
    Player* my_player;
    my_player = Init_Player(1);
    // Получим карту в руку из колоды (из позиции колоды №4) в руку нашего игрока (в позицию руки №1)
    printf("Получим карту в руку из колоды (из позиции колоды №4) в руку нашего игрока (в позицию руки №1)\n");
    Set_Card_In_Place_Of_Hand(my_player,Get_Card_From_Place(my_deck,4), 1);
    // Так же получим последнюю карту из колоды в нашу руку. Поставим карту в третью позицию руки
    printf("Так же получим последнюю карту из колоды в нашу руку. Поставим карту в третью позицию руки\n");
    Set_Card_In_Place_Of_Hand(my_player,Get_Card_From_Place(my_deck,1), 3);
    printf("\n");
    // Теперь создадим коэффициент для подсчёта очков
    printf("Теперь создадим коэффициент для подсчёта очков\n");
    Coefficient* my_coefficient;
    my_coefficient = Init_Coefficient(25, 2);
    printf("Hard coefficient первого= %d, Soft coefficient первого= %d\n", Get_Hard_Coefficient(my_coefficient),Get_Soft_Coefficient(my_coefficient));
    printf("Посчитае кол-во очков на руке игрока. Их: %d\n", Get_Sum_Points(my_player,my_coefficient));
    printf("\n");
    system("pause");
}
