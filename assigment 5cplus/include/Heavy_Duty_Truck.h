#ifndef HEAVY_DUTY_TRUCK_H
#define HEAVY_DUTY_TRUCK_H
#include <string.h>
#include <iostream>
#include "Truck.h"


class Heavy_Duty_Truck :public Truck
{
private:

    double tonnage;
    int numberOfWheels;


public:
    //default constructor
    Heavy_Duty_Truck();
    //overloaded constructor
    Heavy_Duty_Truck(double tonnage, int numberOfWheels,bool cabSize, int horsePower, bool hasWinch);
    //copy constructor
    Heavy_Duty_Truck(Heavy_Duty_Truck const &obj);
    //destructor
    ~Heavy_Duty_Truck();

    //setter
    void setTonnage(double tonnage);
    void setNumberOfWheels(int numberOfWheels);

    //getter
    double getTonnage();
    int getNumberOfWheels();

    //functions
        void toString();

};

#endif // HEAVY_DUTY_TRUCK_H
