
#include <iostream>
typedef struct Card {// Карта. Имеет стоимости от 1 до 10.
    int cost;
};
typedef struct Deck { // Колода карт.
    Card cards[10]; // Массив карт. 
    int capacity;
};
// Конструкторы Deck
Deck* Init_Deck() { // По умолчанию. Размер 10
    Deck* ptr;
    ptr = (Deck*)malloc(sizeof(Deck));
    ptr->capacity = 10;
    return ptr;
}

Deck* Init_Deck(int capacity) { // Размер по выбору
    Deck* ptr;
    ptr = (Deck*)malloc(sizeof(Deck));
    ptr->capacity = capacity;
    return ptr;
}
//

// Деструктор Deck
void destr_Deck(Deck* ptr) {
    delete(ptr);
}

// Конструктор Card
Card* Init_Card(int cost) {
    Card* ptr;
    if (cost > 0 && cost < 11) {
        ptr = (Card*)malloc(sizeof(Card));
        ptr->cost = cost;
        return ptr;
    }
    else {
        printf("\nОшибка. Неверное значение стоимости карты. Указатель на объект равен нулю \n");
        return 0;
    }
}
// Деструктор Card
void destr_Card(Card* ptr) {
    delete(ptr);
}

// Методы 
int main()
{
    std::cout << "Hello World!\n";
}
