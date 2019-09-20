#ifndef BIKE_H
#define BIKE_H
#include "Engine.h"

#include <iostream>
#include <string>
using namespace std;


class Bike : public Engine
{
    public:
        //default constructor
        Bike();
        //overloaded constructor
        Bike(int Cylinder,int HorsePower,string Engine_Type,string make ,int EngineVol);

        string getMake();
        int getEngineVol();
        void setEngineVol(int EngineVol);
        void setMake (string make);
        virtual void showEngineType(){
             cout << "Bike Engine_Type is : "<< getEngine_Type()<<endl;
        }
        virtual void showCylinders(){
            cout << "Bike Cylinder is : "<< getCylinder()<<endl;
        }
        virtual void showHP(){
            cout<<"Bike HP is: " <<getHorsePower()<<endl;
        }
        ~Bike();

    protected:

    private:
        string make;
        int EngineVol;
};

#endif // BIKE_H
