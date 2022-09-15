
#include <iostream>
typedef struct Deck { // Колода карт.
    typedef struct Card {// Карта. Имеет стоимости от 1 до 10.
        int cost;
    };
    Card cards[10]; // Массив карт. 
    int capacity;
};
// Конструкторы
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

// Деструктор
void destr_Deck(Deck* ptr) {
    delete(ptr);
}
int main()
{
    std::cout << "Hello World!\n";
}
