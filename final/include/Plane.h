#ifndef PLANE_H
#define PLANE_H

#include "Engine.h"

#include <iostream>
#include <string>
using namespace std;

class Plane : public Engine
{
    public:
        //default constructor
        Plane();
        //overloaded constructor
        Plane(int Cylinder,int HorsePower,string Engine_Type,int numberOfEngines,int LiftLoad);

        int getnumberOfEngines();
        void setnumberOfEngines(int numberOfEngines);
        int getLiftLoad();
        void setLiftLoad(int LiftLoad);
        //overriding the virtual functions
        virtual void showEngineType(){
             cout << "Plane Engine_Type is : "<< getEngine_Type()<<endl;
        }
        virtual void showCylinders(){
            cout << "Plane Cylinder is : "<< getCylinder()<<endl;
        }
        virtual void showHP(){
            cout<<"Plane HP is: " <<getHorsePower()<<endl;
        }
        //operator implementing
        Plane operator +(const Plane obj);
        Plane operator =(const Plane obj);
        Plane operator ==(const Plane obj);
        Plane operator !=(const Plane obj);
        ~Plane();
    protected:

    private:
        int numberOfEngines;
        int LiftLoad;
};

#endif // PLANE_H
