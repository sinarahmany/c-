#include <iostream>
#include "Player.h"

using namespace std;

int main()
{
    Player wizzard (100,99,0.8);
    Player wolf(40,10,1.3);
    Player boostermagician(20,9999,2.0);

    std::cout <<"the boost of wolf is : " << wolf.getBoost() <<std::endl;//1.3
    //Player wolfman = wizzard.add(wolf.multiply(boostermagician));
    Player wolfman = wizzard+(wolf *boostermagician);//it is the same as the wolfman on the top but using operators + and * does not work on their own without operation
    cout<< "the boost of wolfman is : " << wolfman.getBoost() << endl;//2.0*1.3
    cout<< "the health of wolfman is : " << wolfman.getHealth() << endl;
    cout<< "the xp of wolfman is : " << wolfman.getXp() << endl;


    return 0;
}
