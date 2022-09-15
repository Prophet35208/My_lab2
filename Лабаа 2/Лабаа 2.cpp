
#include <iostream>
typedef struct Card {// Карта. Имеет стоимости от 1 до 10.
    int cost;
};
typedef struct Deck { // Колода карт.
    Card* cards[10]; // Массив карт. 
    int capacity;
};
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
//

// Деструктор Deck
void destr_Deck(Deck* ptr) {
    delete(ptr);
}

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

int main()
{
    std::cout << "Hello World!\n";
}
