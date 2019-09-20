#include "Engine.h"
//default constructor
Engine::Engine(){}
//overloaded constructor
Engine::Engine(int Cylinder,int HorsePower,string Engine_Type){
    this->Cylinder=Cylinder;
    this->HorsePower=HorsePower;
    this->Engine_Type=Engine_Type;
}
//getters and setters
int Engine::getCylinder(){ return Cylinder;}
void Engine::setCylinder (int Cylinder){this->Cylinder = Cylinder;}
int Engine::getHorsePower(){ return HorsePower;}
void Engine::setHorsePower (int HorsePower){this->HorsePower = HorsePower;}
string Engine::getEngine_Type(){ return Engine_Type;}
void Engine::setEngine_Type (string Engine_Type){this->Engine_Type = Engine_Type;}
//destructor
Engine::~Engine(){}
