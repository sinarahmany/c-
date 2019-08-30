#include "Animal.h"

//default constructor
Animal::Animal()
:Animal(0 ,"nothing",0,0){}

//overloaded constructor

Animal::Animal(int id ,std::string name,int height,int weight){
    this->id = id;
    this->name = name;
    this->height = height;
    this->weight = weight;
}
//copy constructor
Animal::Animal(Animal const &obj){}
//destructor
Animal::~Animal(){}

  //setter
void Animal::setId(int id){
    this->id = id;
}

void Animal::setName(std::string name){
    this->name = name;
}

void Animal::setHeight(int height){
    this->height = height;
}

void Animal::setWeight(int weight){
    this->weight = weight;
}


//getter
int Animal::getId(){
    return this->id;
}
std::string Animal::getName(){
    return this->name;
}
std::string Animal::getHeight(){
    return this->height;
}
std::string Animal::getweight(){
    return this->weight;
}
