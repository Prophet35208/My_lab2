﻿#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include "Card.h"
#include "Coefficient.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include "Card_Deck_Ordered.h"
#include "Card_Unit.h"
using namespace std;
bool cond_to_lowest(Card* r1, Card* r2) {
    if (r1->Get_Cost() <= (r2->Get_Cost()))
        return false;
    else
        return true;

}
bool cond_find(Card* card)
{
    return (card->Get_Cost()==14);            // предикат - условие поиска
}

int main()
{
    int a;
    setlocale(LC_ALL, "Rus");
    Card card_1(1), card_2(2), card_3(3);
    Card_Deck_Ordered deck1;
    cout << "Кол-во карт сейчас= " <<deck1.Get_Num_All_Cards() << endl;
    deck1.Set_Card_On_Top(card_1);
    cout << "Кол-во карт сейчас= " << deck1.Get_Num_All_Cards() << endl;
    deck1.Set_Card_On_Top(card_2);
    cout << "Кол-во карт сейчас= " << deck1.Get_Num_All_Cards() << endl;
    deck1.Get_Card_From_Top();
    cout << "Кол-во карт сейчас= " << deck1.Get_Num_All_Cards() << endl;
    deck1.Set_Card_On_Top(card_3);
    cout << "Кол-во карт сейчас= " << deck1.Get_Num_All_Cards() << endl;
    cout << deck1.Get_Card_From_Top();
    
    vector<Card*> v_cards;
    Card* card1, * card2, * card3;
    Card_Unit* card4, * card5, * card6;
    card1 = new Card(3);
    card2 = new Card(5);
    card3 = new Card(2);
    
    card4 = new Card_Unit(4, 14);
    card5 = new Card_Unit(5, 77);
    card6 = new Card_Unit(6, 1);
    
    v_cards.push_back(card1);
    v_cards.push_back(card2);
    v_cards.push_back(card3);
    v_cards.push_back(card4);
    v_cards.push_back(card5);
    v_cards.push_back(card6);

    // Сортировка по цене
    sort(v_cards.begin(), v_cards.end(),cond_to_lowest);
    // Нахождение конкретной цены
    vector<Card*>::iterator ia;
    ia = find_if(v_cards.begin(), v_cards.end(), cond_find);
    if (ia != v_cards.end())     // если найден
         a = (*ia)->Get_Cost();
    system("pause");
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
