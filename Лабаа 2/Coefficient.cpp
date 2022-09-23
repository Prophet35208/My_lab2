#include "Coefficient.h"

Coefficient::Coefficient(int soft_coefficient, int hard_coefficient)
{
	this->soft_coefficient = soft_coefficient;
	this->hard_coefficient = hard_coefficient;
}

Coefficient::Coefficient()
{
	this->soft_coefficient = 0;
	this->hard_coefficient = 1;
}

Coefficient::Coefficient(int hard_coefficient)
{
	this->hard_coefficient = hard_coefficient;
	this->soft_coefficient = 0;
}

void Coefficient::Set_Coefficient(int hard_coefficient, int soft_coefficient)
{
	this->soft_coefficient = soft_coefficient;
	this->hard_coefficient = hard_coefficient;
}

int Coefficient::Get_Soft_Coefficient()
{
	return this->soft_coefficient;
}

int Coefficient::Get_Hard_Coefficient()
{
	return this->hard_coefficient;
}
