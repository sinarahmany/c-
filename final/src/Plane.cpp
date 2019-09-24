#include "Plane.h"
//default constructor
Plane::Plane(){}
Plane::Plane(int numberOfEngines,int LiftLoad)
{
    this->numberOfEngines=numberOfEngines;
    this->LiftLoad=LiftLoad;
}
//overloaded constructor
Plane::Plane(int Cylinder,int HorsePower,string Engine_Type,int numberOfEngines,int LiftLoad)
:Engine(Cylinder,HorsePower,Engine_Type){
    this->numberOfEngines=numberOfEngines;
    this->LiftLoad=LiftLoad;
}
int Plane::getnumberOfEngines(){ return numberOfEngines;}
void Plane::setnumberOfEngines (int numberOfEngines){this->numberOfEngines = numberOfEngines;}
int Plane::getLiftLoad(){ return LiftLoad;}
void Plane::setLiftLoad (int LiftLoad){this->LiftLoad = LiftLoad;}

Plane Plane::operator +(const Plane obj){
    return Plane(this->numberOfEngines,(obj.LiftLoad+this->LiftLoad));
}
Plane Plane::operator =(const Plane obj){
    return Plane(this->numberOfEngines=obj.numberOfEngines,this->LiftLoad=obj.LiftLoad);
}
Plane Plane::operator ==(const Plane obj){
    if(this->numberOfEngines==obj.numberOfEngines && this->LiftLoad==obj.LiftLoad)
    {return Plane(1,1);
    }else{
    return Plane(0,0);
    }

}
Plane Plane::operator !=(const Plane obj){
    if(obj.numberOfEngines==this->numberOfEngines && obj.LiftLoad==this->LiftLoad)
    {return Plane(0,0);
    }else{
    return Plane(1,1);
    }

}
//destractor
Plane::~Plane(){}
