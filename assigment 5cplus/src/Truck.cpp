#include "Truck.h"


//default constructor
Truck::Truck()
:Truck(1,0,1,0 ,"nothing","nothing","nothing"){}

//overloaded constructor
Truck::Truck(bool cabSize, int horsePower, bool hasWinch):Truck(cabSize,horsePower,hasWinch,
            182710 ,"nothing","nothing","nothing"){

}
Truck::Truck(bool cabSize, int horsePower, bool hasWinch,int vin ,std::string make,std::string model,std::string color):Vehicle(vin ,make, model, color){
    this->cabSize = cabSize;
    this->horsePower = horsePower;
    this->hasWinch = hasWinch;
}
//copy constructor
Truck::Truck(Truck const &obj){}
//destructor
Truck::~Truck(){}

//setter
void Truck::setCabSize(bool cabSize){
    this->cabSize = cabSize;
}

void Truck::setHorsePower(int horsePower){
    this->horsePower = horsePower;
}

void Truck::setHasWinch(bool hasWinch){
    this->hasWinch = hasWinch;
}

//getter
bool Truck::getCabSize(){
    return this->cabSize;
}
int Truck::getHorsePower(){
    return this->horsePower;
}
bool Truck::getHasWinch(){
    return this->hasWinch;
}



//functions
void Truck::toString(){
    Vehicle::toString();
    std::cout <<"[" << "Cab Size:" << this->cabSize <<"  HorsePower:"<< this->horsePower <<"  HasWinch:"<< this->hasWinch << "]" << std::endl;
}
