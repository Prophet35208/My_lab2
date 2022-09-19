#include <iostream>
using namespace std;
typedef struct Card {// Карта. Имеет стоимости от 1 до 10.
    int cost;
};
typedef struct Deck { // Колода карт.
    Card* cards[10]; // Массив карт. 
    int capacity;
};
typedef struct Coefficient {// Совокупность коэффициентов
    int hard_coefficient;
    int soft_coefficient;
} current_multiplayer;
typedef struct Hand {// Рука игрока. Макс размер -- 3.
    Card* cards[3];

};
typedef struct Player { // Игрок
    string name;
    Hand hand;
    int current_score;
};

// Конструктор Card
Card* Init_Card(int cost) {// NULL указатель при ошибке
    Card* ptr;
    if (cost > 0 && cost < 11) {
        ptr = (Card*)malloc(sizeof(Card));
        ptr->cost = cost;
        return ptr;
    }
    else
        return NULL;

}
// Деструктор Card
void destr_Card(Card* ptr) {
    delete(ptr);
}

// Конструкторы Deck
Deck* Init_Deck() { // По умолчанию. Размер 10
    Deck* ptr;
    ptr = (Deck*)malloc(sizeof(Deck));
    ptr->capacity = 10;
    for (int i = 0; i < ptr->capacity; i++) {
        ptr->cards[i] = NULL;
            
    }
    return ptr;
}
Deck* Init_Deck(int capacity) { // Размер по выбору
    Deck* ptr;
    ptr = (Deck*)malloc(sizeof(Deck));
    ptr->capacity = capacity;
    return ptr;
}
// Деструктор Deck
void destr_Deck(Deck* ptr) {
    delete(ptr);
}
// Методы Deck
int Get_Num_Cards(Deck* deck_ptr) {// Получение кол-ва карт в колоде
    int num = 0;
    for (int i = 0; i < deck_ptr->capacity; i++) {
        if (deck_ptr->cards[i] != NULL)
            num++;
    }
    return num;
}
void Set_Card_In_Place(Deck* deck_ptr,Card* card_ptr, int place) {// Установить карту в определённое место
    deck_ptr->cards[place] = card_ptr;
}
// Конструктор Coefficient
Coefficient* Init_Coefficient(int soft_coefficient, int hard_coefficient) {
    Coefficient* ptr;
    ptr = (Coefficient*)malloc(sizeof(Coefficient));
    ptr->soft_coefficient = soft_coefficient;
    ptr->hard_coefficient = hard_coefficient;
    return ptr;
}
// Деструктор Coefficient
void destr_Coefficient(Coefficient* ptr) {
    delete(ptr);
}

// Конструктор Player (и Hand)
Player* Init_Player(string name) {
    Player* ptr_1;
    Hand* ptr_2;
    ptr_1 = (Player*)malloc(sizeof(Player));
    ptr_1->name = name;
    ptr_2 = (Hand*)malloc(sizeof(Hand));
    return ptr_1;
}
// Деструктор Player
void destr_Player(Player* ptr) {
    delete(ptr);
}
int main()
{
    // Создадим колоду из 5 карт на столе

}
