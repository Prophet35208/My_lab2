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