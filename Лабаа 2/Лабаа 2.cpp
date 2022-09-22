#include <iostream>
using namespace std;
typedef struct Card {// Карта. Имеет стоимости от 1 до 10.
    int cost;
};
typedef struct Deck { // Колода карт.
    Card* cards[10]; // Массив карт. 
    int capacity;
    int card_flag[10]; // Следит за тем, имеется ли карта в позиции. 0-если нет, 1-если да
};
typedef struct Coefficient {// Совокупность коэффициентов
    int hard_coefficient;
    int soft_coefficient;
};
typedef struct Hand {// Рука игрока. Макс размер -- 3.
    Card* cards[3];
    int current_num_cards;
    int cards_flag[3];
};
typedef struct Player { // Игрок
    int  player_num;
    Hand hand;
};

// Конструктор Card
Card* Init_Card(int cost) {// NULL указатель при ошибке
    Card* ptr;
    if (cost >= 0 && cost < 11) {
        ptr = (Card*)malloc(sizeof(Card));
        ptr->cost = cost;
        return ptr;
    }
    else
        return NULL;

}
// Конструкторы Deck
Deck* Init_Deck() { // По умолчанию. Размер 10
    Deck* ptr;
    ptr = (Deck*)malloc(sizeof(Deck));
    ptr->capacity = ptr->capacity;
    for (int i = 0; i < 10; i++)
    {
        ptr->card_flag[i] = 0;
    }
    return ptr;
}
Deck* Init_Deck(int capacity) { // Размер по выбору
    Deck* ptr;
    ptr = (Deck*)malloc(sizeof(Deck));
    ptr->capacity = capacity;
    for (int i = 0; i < ptr->capacity; i++)
    {
        ptr->card_flag[i] = 0;
    }
    return ptr;
}
// Методы Deck
int Get_Num_Cards(Deck* deck_ptr) {// Получение кол-ва карт в колоде
    int num = 0;
    for (int i = 0; i < deck_ptr->capacity; i++) {
        if (deck_ptr->card_flag[i] != NULL)
            num++;
    }
    return num;
}
void Set_Card_In_Place(Deck* deck_ptr,Card* card_ptr, int place) {// Установить карту в определённое место
    deck_ptr->cards[place-1] = card_ptr;
}
Card* Get_Card_From_Place(Deck* deck_ptr,int place) {
    deck_ptr->card_flag[place - 1] = 0;
    return deck_ptr->cards[place-1];
}
// Конструктор Coefficient
Coefficient* Init_Coefficient(int soft_coefficient, int hard_coefficient) {
    Coefficient* ptr;
    ptr = (Coefficient*)malloc(sizeof(Coefficient));
    ptr->soft_coefficient = soft_coefficient;
    ptr->hard_coefficient = hard_coefficient;
    return ptr;
}
// Методы Coefficient
void Set_Coefficient(Coefficient* Coefficient_ptr, int hard_coefficient, int soft_coefficient) {
    Coefficient_ptr->soft_coefficient = soft_coefficient;
    Coefficient_ptr->hard_coefficient = hard_coefficient;
}
// Конструктор Player (и Hand)

Player* Init_Player(int player_num) {
    Player* ptr;
    ptr = (Player*)malloc(sizeof(Player));
    ptr->player_num = player_num;
    ptr->hand.current_num_cards = 0;
    for (int i = 0; i < 3; i++) {
        ptr->hand.cards_flag[i] = 0;

    }
    return ptr;
}
// Методы Player

void Set_Card_In_Place_Of_Hand(Player* player_ptr, Card* card_ptr, int hand_place) {
    player_ptr->hand.cards[hand_place - 1] = card_ptr;
    player_ptr->hand.cards_flag[hand_place - 1] = 1;
}
int Get_Sum_Points(Player* player_ptr, Coefficient* coefficient) {
    int sum_points_first = 0, sum_points_final=0;
    for (int i = 0; i < 3; i++)
    {
        if (player_ptr->hand.cards_flag[i] == 1)
            sum_points_first +=player_ptr->hand.cards[i]->cost;
    }
    sum_points_final = (sum_points_first * coefficient->hard_coefficient) + coefficient->soft_coefficient;
    return sum_points_final;
}
int main()
{

    // Создадим колоду вместимостью 5 карт
    Deck* my_deck;
    my_deck=Init_Deck(5);
    // Посмотрим кол-во карт в колоде (не макс. их кол-во)
    int num;
    num=Get_Num_Cards(my_deck);
    // Добавим карту 5 в позицию 1, и карту 2 в позицию 4. 
    Set_Card_In_Place(my_deck, Init_Card(5), 1);
    Set_Card_In_Place(my_deck, Init_Card(2), 4);
    // Теперь создадим игрока №1 с его игровой рукой. Пока что она пустая
    Player* my_player;
    my_player=Init_Player(1);
    // Получим карту в руку из колоды (из позиции колоды №4) в руку нашего игрока (в позицию руки №1)
    Set_Card_In_Place_Of_Hand(my_player, Get_Card_From_Place(my_deck, 4), 1);
    // Так же получим последнюю карту из колоды в нашу руку. Поставим карту в третью позицию руки
    Set_Card_In_Place_Of_Hand(my_player, Get_Card_From_Place(my_deck, 1), 3);
    // Теперь создадим коэффициент для подсчёта очков
    Coefficient* my_coefficient;
    my_coefficient = Init_Coefficient(25, 2);
    // Воспользуемся созданным коэффициентом для того, чтобы подсчитать кол-во баллов на руке нашего игрока
    int points;
    points = Get_Sum_Points(my_player, my_coefficient);
    getchar();
}
