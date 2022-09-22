#include "Player.h"

Player::Player(int player_num)
{
    this->player_num = player_num;
}

int Player::Get_Sum_Points(Coefficient* coefficient)
{
    int sum_points_first = 0, sum_points_final = 0;
    for (int i = 0; i < 3; i++)
    {
        if (this->hand.Check_If_Card_In_Place(i))
            sum_points_first += this->hand.Get_Cost_From_Card_In_Place(i);
    }
    sum_points_final = (sum_points_first * coefficient->hard_coefficient) + coefficient->soft_coefficient;
    return sum_points_final;
}
