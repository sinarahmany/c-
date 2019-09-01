#include "Mammal.h"

//default constructor
Mammal::Mammal()
:Mammal(1,"nothing",0,0,new Date(0,"mm","ww"),1){}
//overloaded constructor
Mammal::Mammal(int id, std::string name,int height,int weight,Date *animalBirth,bool eatMeat){
    Date* getDate();
    this->id = id;
    this->name = name;
    this->height = height;
    this->weight = weight;
    this->eatMeat = eatMeat;
    this->animalBirth = animalBirth;
}
//copy constructor
Mammal::Mammal(Mammal const &obj){
    this->id = obj.id;
    this->name = obj.name;
    this->height = obj.height;
    this->weight = obj.weight;
    this->eatMeat = obj.eatMeat;
    this->animalBirth = obj.animalBirth;
}
//destructor
Mammal:: ~Mammal(){}

std::string Mammal::Sound(){
    return "I can make noise as a Mammal";
}

std::string Mammal::Move(){
    return "I can move as a Mammal";
}

void Mammal::setId(int id){
    this->id = id;
}
void Mammal::setName(std::string name){
    this->name = name;
}
void Mammal::setHeight(int height){
    this->height = height;
}
void Mammal::setWeight(int weight){
    this->weight = weight;
}
void Mammal::setEatMeat(bool eatMeat){
    this->eatMeat = eatMeat;
}

int Mammal::getId(){
    return id;
}
std::string Mammal::getName(){
    return name;
}
int Mammal::getHeight(){
    return height;
}
int Mammal::getWeight(){
    return weight;
}
bool Mammal::getEatMeat(){
    return eatMeat;
}

std::string Mammal::toString(){
    return  "[ " + std::to_string(this->id) + " " +  this->name + " " + std::to_string(this->height) + " " + std::to_string(this->weight) + this->animalBirth->whatDateIsIt() + std::to_string(this->eatMeat) +  " ]" ;

}
