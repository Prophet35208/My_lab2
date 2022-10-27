#include "Player.h"

int Player::num_all_players=0;

Player::Player(int player_num)
{
    this->player_num = player_num;
    num_all_players++;
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


int Player::Get_Num_All_Players()
{
    return num_all_players;
}

int* Player::Return_Copy_Num_Player_Adress()
{
     int *num=new int(1);
     *(num) = this->player_num;
    return num;
}

int& Player::Return_Num_PLayer_Ssulka_Ssulka()
{
    int* num = new int(1);
    *(num) = this->player_num;
    return *num;
}

Player::~Player()
{
    num_all_players--;
}

ostream& operator<<(ostream& os, const Player& player)
{
    os << "<!> " << player.player_num << " <!>";
    return os;
}
