#pragma once
#include <iostream>
using namespace std;
class Card // �����. 
{
protected:
	int cost;
public:
	Card(int cost);
	Card();
	virtual int Get_Cost(); // � ������� ������ ���������� ����������
	void Set_Cost(int cost);
	friend ostream& operator<<(ostream& os, const Card& dt);
};