#pragma once
class Coefficient
{
public:
	int hard_coefficient;
	int soft_coefficient;
public:
	Coefficient();
	Coefficient(int hard_coefficient);
	Coefficient(int soft_coefficient, int hard_coefficient);

	void Set_Coefficient(int hard_coefficient, int soft_coefficient);
	int Get_Soft_Coefficient();
	int Get_Hard_Coefficient();
	void Set_Soft_Coefficient(int soft_coefficient);
	void Set_Hard_Coefficient(int hard_coefficient);
	// ������� ����������� ����������� �� ��������� ����� soft_coefficient (�������� +)
	Coefficient operator+ (int num);
	// ������� ����������� ����������� �� ������� hard_coefficient ��� ���� ���������� �������� ����� ��� �� ���������� (����������� � ���������� ++)
	Coefficient& operator++();
	Coefficient operator++(int);
};

