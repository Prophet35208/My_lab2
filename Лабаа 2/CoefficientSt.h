#pragma once
typedef struct Coefficient {// Совокупность коэффициентов
    int hard_coefficient;
    int soft_coefficient;
};

// Конструктор Coefficient
Coefficient* Init_Coefficient(int soft_coefficient, int hard_coefficient) {
    Coefficient* ptr;
    ptr = (Coefficient*)malloc(sizeof(Coefficient));
    ptr->soft_coefficient = soft_coefficient;
    ptr->hard_coefficient = hard_coefficient;
    return ptr;
}
// Методы Coefficient
void Set_Coefficient(Coefficient* Coefficient_ptr, int soft_coefficient, int hard_coefficient) {
    Coefficient_ptr->soft_coefficient = soft_coefficient;
    Coefficient_ptr->hard_coefficient = hard_coefficient;
}
int Get_Hard_Coefficient(Coefficient* coefficient_ptr) {
    return coefficient_ptr->hard_coefficient;
}
int Get_Soft_Coefficient(Coefficient* coefficient_ptr) {
    return coefficient_ptr->soft_coefficient;
}