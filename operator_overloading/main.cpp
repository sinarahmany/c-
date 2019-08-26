#include <iostream>
#include "Player.h"

using namespace std;

int main()
{
    Player wizzard (100,999,0.8);
    Player wolf(40,10,1.3);
    Player boostermagician(20,9999,2.0);

    std::cout <<"the boost of wolf is : " << wolf.getBoost() <<std::endl;//1.3
    Player wolfman = wolf.multiply(boostermagician);
    cout<< "the boost of wolfman is : " << wolfman.getBoost() << endl;//2.0*1.3

    return 0;
}
