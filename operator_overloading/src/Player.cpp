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

Player Player::multiply(const Player obj){
    return Player(this->health,this->xp,(obj.boost*this->boost));
}

Player Player::add(const Player obj){
    return Player(obj.health+this->health,obj.xp+this->xp,obj.boost);
}

Player Player::operator *(const Player obj){
    return Player(this->health,this->xp,(obj.boost*this->boost));
}

Player Player::operator +(const Player obj){
    return Player(obj.health+this->health,obj.xp+this->xp,obj.boost);
}
Player::~Player(){};
