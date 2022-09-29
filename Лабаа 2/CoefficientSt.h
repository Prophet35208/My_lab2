#pragma once
typedef struct Coefficient {// ������������ �������������
    int hard_coefficient;
    int soft_coefficient;
};

// ����������� Coefficient
Coefficient* Init_Coefficient(int soft_coefficient, int hard_coefficient) {
    Coefficient* ptr;
    ptr = (Coefficient*)malloc(sizeof(Coefficient));
    ptr->soft_coefficient = soft_coefficient;
    ptr->hard_coefficient = hard_coefficient;
    return ptr;
}
// ������ Coefficient
void Set_Coefficient(Coefficient* Coefficient_ptr, int hard_coefficient, int soft_coefficient) {
    Coefficient_ptr->soft_coefficient = soft_coefficient;
    Coefficient_ptr->hard_coefficient = hard_coefficient;
}