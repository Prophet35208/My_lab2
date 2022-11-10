#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Card.h"
#include "Coefficient.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
using namespace std;
int main()
{
    // Контроль над конструкторами при создании объектов класса
    setlocale(LC_ALL, "Rus");
    Card card_1(3);
    printf("Стоимость карты: %d", card_1.Get_Cost());
    printf("\n");
    printf("\n");
    Card card_2(0);
    printf("Стоимость карты: %d", card_2.Get_Cost());
    printf("\n");
    printf("\n");
    Card card_3(20);
    printf("Стоимость карты: %d", card_3.Get_Cost());
    printf("\n");
    printf("\n");
    printf("\n");
    // Контроль на set-тером стоимости объекта 
    card_1.Set_Cost(5);
    printf("Стоимость карты: %d", card_1.Get_Cost());
    printf("\n");
    printf("\n");
    card_2.Set_Cost(-4);
    printf("Стоимость карты: %d", card_2.Get_Cost());
    printf("\n");
    printf("\n");
    card_3.Set_Cost(100);
    printf("Стоимость карты: %d", card_3.Get_Cost());
    printf("\n");

    // Создание массивов, заполнение первого, второй и третий оставлен заполненный конструктором по умолчанию
    Card cards_1[5][4];
    for (int  i=0;i<5;i++)
        for (int j = 0; j < 4; j++)
        {
            cards_1[i][j].Set_Cost(j+1);
        }
    // Заполнение массива карт 3 ценой карт первого массива + единица к цене каждой карты. Копируется вторая строка первого массива
    Card cards_2[4],cards_3[4];
    for (int i = 0; i < 4; i++)
        cards_3[i].Set_Cost(cards_1[2][i].Get_Cost() + cards_3[i].Get_Cost());
    // Вывод
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", cards_3[i].Get_Cost());
    }

}
/* Код для прошлой демонстрации
// Создадим колоду вместимостью 5 карт
    printf("Создадим колоду вместимостью 5 карт\n");
    Deck my_deck(5);
    // Можем так же создать колоду через консольный диалог
    printf("Можем так же создать колоду через консольный диалог\n");
    int buf;
    Deck* you_deck;
    printf("Введите кол-ва карт в колоде: ");
    scanf("%d", &buf);
    you_deck = new(Deck);
    //Сразу удалим её, т.к. она нам не нужна
    printf("Сразу удалим её, т.к. она нам не нужна\n");
    delete(you_deck);
    printf("\nВаша колода была создана и после удалена\n");
    printf("\n");
    // Посмотрим кол-во карт в колоде (не макс. их кол-во)
    printf("Посмотрим кол-во карт в колоде (не макс. их кол-во)\n");
    int num;
    num=my_deck.Get_Num_Cards();
    printf("Кол-во кард в колоде: %d\n", num);
    // Добавим карту 5 в позицию 1, и карту 2 в позицию 4. 
    printf("Добавим карту 5 в позицию 1, и карту 2 в позицию 4\n");
    Card first_card(5), second_card(2);
    my_deck.Set_Card_In_Place(&first_card,1);
    my_deck.Set_Card_In_Place(&second_card, 4);
    num = my_deck.Get_Num_Cards();
    printf("Кол-во кард в колоде теперь: %d\n", num);
    printf("\n");
    // Теперь создадим игрока №1 с его игровой рукой. Пока что она пустая
    printf("Теперь создадим игрока №1 с его игровой рукой. Пока что она пустая\n");
    Player my_player(1);
    // Получим карту в руку из колоды (из позиции колоды №4) в руку нашего игрока (в позицию руки №1)
    printf("Получим карту в руку из колоды (из позиции колоды №4) в руку нашего игрока (в позицию руки №1)\n");
    my_player.hand.Set_Card_In_Place_Of_Hand(my_deck.Get_Card_From_Place(4), 1);
    // Так же получим последнюю карту из колоды в нашу руку. Поставим карту в третью позицию руки
    printf("Так же получим последнюю карту из колоды в нашу руку. Поставим карту в третью позицию руки\n");
    my_player.hand.Set_Card_In_Place_Of_Hand(my_deck.Get_Card_From_Place(1), 3);
    printf("\n");
    // Теперь создадим коэффициент для подсчёта очков
    printf("Теперь создадим коэффициент для подсчёта очков\n");
    Coefficient my_coefficient(25,2);
    // Можем попробовать создать его разными конструкторами.
    Coefficient coefficient_1, coefficient_2(2);
    printf("Hard coefficient = %d, Soft coefficient = %d\n", my_coefficient.Get_Hard_Coefficient(), my_coefficient.Get_Soft_Coefficient());
    printf("\n");
    printf("\n");
    //Так же покажем работу с динамическим массивом объектов класса и с массивом динамических объектов класса
    // Массив динамических объектов класса
    // Создадим три карты со стоимостью 3 и узнаем их суммарную стоимость. После этого удалим
    printf("Так же покажем работу с динамическим массивом объектов класса и с массивом динамических объектов класса\n");
    printf("\n");
    printf("Массив динамических объектов класса\n");
    printf("Создадим три карты\n");
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
    printf("Работа с динамическим массивом объектов класса указана в комментариях\n");
    // Работа с динамическим массивом объектов класса.
    Card* arr = new Card[10];// Конструкто по умолчанию делает все карты стоимостью 1
    for (int i = 0; i < 10; ++i) {// Теперь стоимость установим в 3.
        arr[i].Set_Cost(3);
    }
    // Теперь удалим массив
    delete[] arr;
    printf("\n");
    // Воспользуемся созданным коэффициентом для того, чтобы подсчитать кол-во баллов на руке нашего игрока
    printf("Воспользуемся ранее созданным коэффициентом для того, чтобы подсчитать кол-во баллов на руке нашего игрока\n");
    int points;
    points = my_player.Get_Sum_Points(&my_coefficient);
    printf("Кол-во баллов на руке нашего игрока: %d\n", points);*/
