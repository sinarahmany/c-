#include "Mammal.h"

//defult constructor
Mammal::Mammal()
:Mammal(true,0 ,"nothing",0,0){}

//overloaded constructor

Mammal::Mammal(bool eatMeat, int id ,std::string name,int height,int weight):Animal(id ,name, height, weight){
    this->eatMeat = eatMeat;
}
//copy constructor
Mammal::Mammal(Mammal const &obj){}
//destructor
Mammal::~Mammal(){}
//setter
void Mammal::seteatMeat(bool eatMeat){
    this->eatMeat = eatMeat;
}
//getters
bool Mammal::geteatMeat(){
    return this->eatMeat;
}
