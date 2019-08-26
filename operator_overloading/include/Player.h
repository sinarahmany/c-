#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <fstream>


class Player
{
    public:
        Player() : health{0} ,xp {0} , boost{0}{}
        Player (int health , int xp ,double boost) : health{health} ,xp{xp} , boost{boost}{
        }
        Player (const Player &copyObj);
        int getHealth();
        void setHealth(int health);
        int getXp();
        void setXp(int xp);
        double getBoost();
        void setBoost(double boost);
        ~Player();




    private:
        int health;
        int xp;
        double boost;
};

#endif // PLAYER_H
