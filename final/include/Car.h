#ifndef CAR_H
#define CAR_H
#include "Engine.h"

#include <iostream>
#include <string>
using namespace std;

class Car : public Engine
{
    public:
        //default constructor
        Car();
        //overloaded constructor
        Car(int Cylinder,int HorsePower,string Engine_Type,string make ,int year,string model);
        int getYear();
        string getModel();
        string getMake();
        void setModel (string model);
        void setMake (string make);
        void setYear (int year);
        //overriding the virtual functions
        virtual void showEngineType(){
             cout << "Car Engine_Type is : "<< getEngine_Type()<<endl;
        }
        virtual void showCylinders(){
            cout << "Car Cylinder is : "<< getCylinder()<<endl;
        }
        virtual void showHP(){
            cout<<"Car HP is: " <<getHorsePower()<<endl;
        }
        ~Car();


    protected:

    private:
        string make;
        string model;
        int year;
};

#endif // CAR_H
