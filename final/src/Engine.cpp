#include "Engine.h"
//default constructor
Engine::Engine(){}
//overloaded constructor
Engine::Engine(int Cylinder,int HorsePower,string Engine_Type){
    if(Cylinder >= 0){
        this->Cylinder = Cylinder;
        }else{
          throw std::invalid_argument("Cylinder is a negative number");
        }
    if(HorsePower >= 0){
       this->HorsePower = HorsePower;
    }else{
        throw std::invalid_argument("HP is a negative number");
    }
    this->Engine_Type=Engine_Type;
}
//getters and setters
int Engine::getCylinder(){ return Cylinder;}
void Engine::setCylinder (int Cylinder){this->Cylinder = Cylinder;}
int Engine::getHorsePower(){ return HorsePower;}
void Engine::setHorsePower (int HorsePower){this->HorsePower = HorsePower;}
string Engine::getEngine_Type(){ return Engine_Type;}
void Engine::setEngine_Type (string Engine_Type){this->Engine_Type = Engine_Type;}

//copy constructor
Engine::Engine(Engine const &obj){
    this->Engine_Type = obj.Engine_Type;
    this->Cylinder = obj.Cylinder;
    this->HorsePower = obj.HorsePower;
}

//function
void Engine::toString(){
    std::cout <<"EngineType:" << this->Engine_Type <<"  Cylinder:"<< this->Cylinder <<"  HorsePower:"<< this->HorsePower << std::endl;
}
