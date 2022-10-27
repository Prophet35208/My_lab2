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
	// ƒобавим возможность увеличивать на некоторое число soft_coefficient (оператор +)
	Coefficient operator+ (int num);
	// ƒобавим возможность увеличивать на единицу hard_coefficient при этом возвращать значение после или до увеличени€ (постфиксный и префиксный ++)
	Coefficient& operator++();
	Coefficient operator++(int);
};

