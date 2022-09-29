#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "CardSt.h"
#include "DeckSt.h"
#include "CoefficientSt.h"
#include "HandSt.h"
#include "PlayerSt.h"

int main()
{
    setlocale(LC_ALL, "Rus");
    // Создадим колоду вместимостью 5 карт
    Deck* my_deck;
    my_deck=Init_Deck(5);
    // Посмотрим кол-во карт в колоде (не макс. их кол-во)
    int num;
    num=Get_Num_Cards(my_deck);
    printf("Мы создали колоду. В ней %d карт\n", num);
    // Добавим карту 5 в позицию 1, и карту 2 в позицию 4. 
    printf("Добавим карту 5 в позицию 1, и карту 2 в позицию 4.\n");
    Set_Card_In_Place(my_deck, Init_Card(5), 1);
    Set_Card_In_Place(my_deck, Init_Card(2), 4);
    // Теперь создадим игрока №1 с его игровой рукой. Пока что она пустая
    printf("Теперь создадим игрока №1 с его игровой рукой. Пока что она пустая");
    Player* my_player;
    my_player=Init_Player(1);
    // Получим карту в руку из колоды (из позиции колоды №4) в руку нашего игрока (в позицию руки №1)
    printf("Получим карту в руку из колоды (из позиции колоды №4) в руку нашего игрока (в позицию руки №1)\n");
    Set_Card_In_Place_Of_Hand(my_player, Get_Card_From_Place(my_deck, 4), 1);
    printf("Так же получим последнюю карту из колоды в нашу руку. Поставим карту в третью позицию руки\n");;
    // Так же получим последнюю карту из колоды в нашу руку. Поставим карту в третью позицию руки
    Set_Card_In_Place_Of_Hand(my_player, Get_Card_From_Place(my_deck, 1), 3);
    // Теперь создадим коэффициент для подсчёта очков
    Coefficient* my_coefficient;
    printf("Теперь создадим коэффициент для подсчёта очков. Введите через пробел soft coefficient и hard coefficient\n");
    int a, b;
    scanf("%d %d", &a, &b);
    my_coefficient = Init_Coefficient(a, b);
    // Воспользуемся созданным коэффициентом для того, чтобы подсчитать кол-во баллов на руке нашего игрока
    int points;
    points = Get_Sum_Points(my_player, my_coefficient);
    printf("Кол-во баллов нашего игрка %d\n", points);
    system("pause");
}
