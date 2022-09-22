#pragma once
class Coefficient
{
public:
	int hard_coefficient;
	int soft_coefficient;
public:
	Coefficient(int soft_coefficient, int hard_coefficient);
	void Set_Coefficient(int hard_coefficient, int soft_coefficient);
};

