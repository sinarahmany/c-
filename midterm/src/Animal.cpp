#include "Animal.h"


//default constructor
Animal::Animal()
:Animal(0 ,"nothing",0,0,new Date(0,"mm","ww")){}

//overloaded constructor

Animal::Animal(int id ,std::string name,int height,int weight,Date *animalBirth){
    this->id = id;
    this->name = name;
    this->height = height;
    this->weight = weight;
    this->animalBirth = animalBirth;
}
//copy constructor
//copy constructor
Animal::Animal(Animal const &obj){
    this->id = obj.id;
    this->name = obj.name;
    this->height = obj.height;
    this->weight = obj.weight;
    this->animalBirth = obj.animalBirth;}
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
int Animal::getHeight(){
    return this->height;
}
int Animal::getWeight(){
    return this->weight;
}


void Animal::toString(){
    std::cout << "[ " << this->id << " " <<  this->name << " " << this->height << " " << this->weight << " ]" <<this->animalBirth->whatDateIsIt()<< std::endl;

}
