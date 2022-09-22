#include "Coefficient.h"

Coefficient::Coefficient(int soft_coefficient, int hard_coefficient)
{
	this->soft_coefficient = soft_coefficient;
	this->hard_coefficient = hard_coefficient;
}

void Coefficient::Set_Coefficient(int hard_coefficient, int soft_coefficient)
{
	this->soft_coefficient = soft_coefficient;
	this->hard_coefficient = hard_coefficient;
}
