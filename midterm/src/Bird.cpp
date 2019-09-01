#include "Bird.h"

//default constructor
Bird::Bird()
:Bird(1,"nothing",0,0,new Date(0,"mm","ww"),1){}
//overloaded constructor
Bird::Bird(int id, std::string name,int height,int weight,Date *animalBirth,bool isWild){
    Date* getDate();
    this->id = id;
    this->name = name;
    this->height = height;
    this->weight = weight;
    this->isWild = isWild;
    this->animalBirth = animalBirth;
}
//copy constructor
Bird::Bird(Bird const &obj){
    this->id = obj.id;
    this->name = obj.name;
    this->height = obj.height;
    this->weight = obj.weight;
    this->isWild = obj.isWild;
    this->animalBirth = obj.animalBirth;
}

 Bird::~Bird(){}

std::string Bird::Sound(){
    return "I can make noise as a Bird";
}

std::string Bird::Move(){
    return "I can move as a Bird";
}

void Bird::setId(int id){
    this->id = id;
}
void Bird::setName(std::string name){
    this->name = name;
}
void Bird::setHeight(int height){
    this->height = height;
}
void Bird::setWeight(int weight){
    this->weight = weight;
}
void Bird::setIsWild(bool isWild){
    this->isWild = isWild;
}

int Bird::getId(){
    return id;
}
std::string Bird::getName(){
    return name;
}
int Bird::getHeight(){
    return height;
}
int Bird::getWeight(){
    return weight;
}
bool Bird::getIsWild(){
    return isWild;
}

std::string Bird::toString(){
    return  "[ " + std::to_string(this->id) + " " +  this->name + " " + std::to_string(this->height) + " " + std::to_string(this->weight) + this->animalBirth->whatDateIsIt()+ std::to_string(this->isWild) +  " ]" ;

}

