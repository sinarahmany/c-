#include "Player.h"

Player::Player (const Player &copyObj){
    this->health = copyObj.health;
    this->xp = copyObj.xp;
    this->boost = copyObj.boost;
}
int Player::getHealth(){ return health;}
void Player::setHealth (int health){this->health = health;}

int Player::getXp(){ return xp;}
void Player::setXp(int xp){this->xp == xp;}

double Player::getBoost(){ return boost;}
void Player::setBoost(double boost){this->boost = boost; }

Player::~Player(){};
