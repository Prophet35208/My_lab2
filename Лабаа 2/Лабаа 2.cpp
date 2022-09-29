#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "CardSt.h"
#include "DeckSt.h"
#include "CoefficientSt.h"
#include "HandSt.h"
#include "PlayerSt.h"
/*setlocale(LC_ALL, "rus");
    // Создадим колоду вместимостью 5 карт
    Deck my_deck(5);
    // Можем так же создать колоду через консольный диалог
    int buf;
    Deck* you_deck;
    printf("Введите кол-ва карт в колоде: ");
    scanf("%d", &buf);
    you_deck = new(Deck);
    //Сразу удалим её, т.к. она нам не нужна
    delete(you_deck);
    printf("\nВыша колода была создана и после удалена\n");
    // Посмотрим кол-во карт в колоде (не макс. их кол-во)
    int num;
    num=my_deck.Get_Num_Cards();
    printf("Кол-во кард в колоде: %d\n", num);
    // Добавим карту 5 в позицию 1, и карту 2 в позицию 4. 
    Card first_card(5), second_card(2);
    my_deck.Set_Card_In_Place(&first_card,1);
    my_deck.Set_Card_In_Place(&second_card, 4);
    printf("Добавим карту 5 в позицию 1, и карту 2 в позицию 4. Операция выполнена\n");
    // Теперь создадим игрока №1 с его игровой рукой. Пока что она пустая
    Player my_player(1);
    // Получим карту в руку из колоды (из позиции колоды №4) в руку нашего игрока (в позицию руки №1)
    my_player.hand.Set_Card_In_Place_Of_Hand(my_deck.Get_Card_From_Place(4), 1);
    // Так же получим последнюю карту из колоды в нашу руку. Поставим карту в третью позицию руки
    my_player.hand.Set_Card_In_Place_Of_Hand(my_deck.Get_Card_From_Place(1), 3);
    // Теперь создадим коэффициент для подсчёта очков
    Coefficient my_coefficient(25,2);
    // Можем попробовать создать его разными конструкторами.
    Coefficient coefficient_1, coefficient_2(2);
    printf("Hard coefficient первого= %d, Soft coefficient первого= %d\n", coefficient_1.Get_Hard_Coefficient(), coefficient_1.Get_Soft_Coefficient());
    printf("Hard coefficient второго= %d, Soft coefficient второго= %d\n", coefficient_2.Get_Hard_Coefficient(), coefficient_2.Get_Soft_Coefficient());
    //Так же покажем работу с динамическим массивом объектов класса и с массивом динамических объектов класса
    printf("Поработаем с массивами\n");
    // Массивом динамических объектов класса
    // Создадим три карты со стоимостью 3 и узнаем их суммарную стоимость. После этого удалим
    Card* mas_cards[50];
    int sum=0;
    for (int i = 0; i < 3; i++)
    {
        mas_cards[i] = new Card(3);
    }
    for (int i = 0; i < 3; i++)
    {
        sum += mas_cards[i]->Get_Cost();
    }
    printf("Суммарная стоимость трёх новосозданных карт: %d\n", sum);
    for (int i = 0; i < 3; i++)
    {
        delete(mas_cards[i]);
    }
    // Работа с динамическим массивом объектов класса.
    Card* arr = new Card[10];// Конструкто по умолчанию делает все карты стоимостью 1
    for (int i = 0; i < 10; ++i) {// Теперь стоимость установим в 3.
        arr[i].Set_Cost(3);
    }
    // Теперь удалим массив
    delete[] arr;
    // Воспользуемся созданным коэффициентом для того, чтобы подсчитать кол-во баллов на руке нашего игрока
    int points;
    points = my_player.Get_Sum_Points(&my_coefficient);
    system("pause");*/
int main()
{
    setlocale(LC_ALL, "rus");
    // Создадим колоду вместимостью 5 карт
    Deck* my_deck;
    my_deck = Init_Deck();
    // Можем так же создать колоду через консольный диалог
    int buf;
    Deck* you_deck;
    printf("Введите кол-ва карт в колоде: ");
    scanf("%d", &buf);
    you_deck = Init_Deck();
    you_deck->capacity = buf;
    printf("\nВаша колода была создана и после удалена\n");
    // Посмотрим кол-во карт в колоде (не макс. их кол-во)
    int num;
    num = Get_Num_Cards(my_deck);
    printf("Кол-во кард в колоде: %d\n", num);
    // Добавим карту 5 в позицию 1, и карту 2 в позицию 4. 
    Card first_card(5), second_card(2);
    first_card.
    my_deck.Set_Card_In_Place(&first_card, 1);
    my_deck.Set_Card_In_Place(&second_card, 4);
    printf("Добавим карту 5 в позицию 1, и карту 2 в позицию 4. Операция выполнена\n");
    // Теперь создадим игрока №1 с его игровой рукой. Пока что она пустая
    Player my_player(1);
    // Получим карту в руку из колоды (из позиции колоды №4) в руку нашего игрока (в позицию руки №1)
    my_player.hand.Set_Card_In_Place_Of_Hand(my_deck.Get_Card_From_Place(4), 1);
    // Так же получим последнюю карту из колоды в нашу руку. Поставим карту в третью позицию руки
    my_player.hand.Set_Card_In_Place_Of_Hand(my_deck.Get_Card_From_Place(1), 3);
    // Теперь создадим коэффициент для подсчёта очков
    Coefficient my_coefficient(25, 2);
    // Можем попробовать создать его разными конструкторами.
    Coefficient coefficient_1, coefficient_2(2);
    printf("Hard coefficient первого= %d, Soft coefficient первого= %d\n", coefficient_1.Get_Hard_Coefficient(), coefficient_1.Get_Soft_Coefficient());
    printf("Hard coefficient второго= %d, Soft coefficient второго= %d\n", coefficient_2.Get_Hard_Coefficient(), coefficient_2.Get_Soft_Coefficient());
    //Так же покажем работу с динамическим массивом объектов класса и с массивом динамических объектов класса
    printf("Поработаем с массивами\n");
    // Массивом динамических объектов класса
    // Создадим три карты со стоимостью 3 и узнаем их суммарную стоимость. После этого удалим
    Card* mas_cards[50];
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        mas_cards[i] = new Card(3);
    }
    for (int i = 0; i < 3; i++)
    {
        sum += mas_cards[i]->Get_Cost();
    }
    printf("Суммарная стоимость трёх новосозданных карт: %d\n", sum);
    for (int i = 0; i < 3; i++)
    {
        delete(mas_cards[i]);
    }
    // Работа с динамическим массивом объектов класса.
    Card* arr = new Card[10];// Конструкто по умолчанию делает все карты стоимостью 1
    for (int i = 0; i < 10; ++i) {// Теперь стоимость установим в 3.
        arr[i].Set_Cost(3);
    }
    // Теперь удалим массив
    delete[] arr;
    // Воспользуемся созданным коэффициентом для того, чтобы подсчитать кол-во баллов на руке нашего игрока
    int points;
    points = my_player.Get_Sum_Points(&my_coefficient);
    system("pause");
}
/*setlocale(LC_ALL, "Rus");
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
    system("pause");*/
