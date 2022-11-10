#include <iostream>
#include "Card.h"

Card::Card(int cost)
{
	try {
		if (cost <= 0)
			throw - 1;
		if (cost > 10)
			throw 1;
		this->cost = cost;
	}
	catch (int i) {
		printf("������� ����������. ���: %d. ������ ������, �� ��������� ����������� � 1\n", i);
		this->cost=1;
	}
}

Card::Card()
{
	this->cost = 1;
}

int Card::Get_Cost()
{
	return this->cost;
}

void Card::Set_Cost(int cost)
{
	try {
		if (cost <= 0)
			throw - 1;
		if (cost > 10)
			throw 1;
		this->cost = cost;
	}
	catch (int i) {
		printf("������� ����������. ���: %d. ��������� �� �����������\n", i);
	}
}
