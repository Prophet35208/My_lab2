#pragma once
typedef struct Card {// �����. ����� ��������� �� 1 �� 10.
    int cost;
};
Card* Init_Card(int cost) {// NULL ��������� ��� ������
    Card* ptr;
    if (cost >= 0 && cost < 11) {
        ptr = (Card*)malloc(sizeof(Card));
        ptr->cost = cost;
        return ptr;
    }
    else
        return NULL;

}
void Set_Card_Cost(Card* card_ptr, int cost) {
    card_ptr->cost = cost;
}