#include <iostream>
#include "Card.h"
#include "Coefficient.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
using namespace std;
int main()
{
    // Создадим колоду вместимостью 5 карт
    Deck my_deck(5);
    // Посмотрим кол-во карт в колоде (не макс. их кол-во)
    int num;
    num=my_deck.Get_Num_Cards();
    // Добавим карту 5 в позицию 1, и карту 2 в позицию 4. 
    Card first_card(5), second_card(2);
    my_deck.Set_Card_In_Place(&first_card,1);
    my_deck.Set_Card_In_Place(&second_card, 4);
    // Теперь создадим игрока №1 с его игровой рукой. Пока что она пустая
    Player my_player(1);
    // Получим карту в руку из колоды (из позиции колоды №4) в руку нашего игрока (в позицию руки №1)
    my_player.hand.Set_Card_In_Place_Of_Hand(my_deck.Get_Card_From_Place(4), 1);
    // Так же получим последнюю карту из колоды в нашу руку. Поставим карту в третью позицию руки
    my_player.hand.Set_Card_In_Place_Of_Hand(my_deck.Get_Card_From_Place(1), 3);
    // Теперь создадим коэффициент для подсчёта очков
    Coefficient my_coefficient(25,2);
    // Воспользуемся созданным коэффициентом для того, чтобы подсчитать кол-во баллов на руке нашего игрока
    int points;
    points = my_player.Get_Sum_Points(&my_coefficient);
    getchar();
}
