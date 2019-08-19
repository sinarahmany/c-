#include "Animal.h"
#include <iostream>

 void Animal::sound(){
    std::cout << "I made some noise" << std::endl;
}
void Animal::setLegs(int Legs){
    this->Legs = Legs;
}
int Animal::getLegs(){
    return this->Legs;
}
void Animal::setTail(bool Tail){
    this->Tail=Tail;
}
bool Animal::getTail(){
    return this->Tail;
}
