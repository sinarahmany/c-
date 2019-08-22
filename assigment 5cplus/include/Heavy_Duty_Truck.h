#ifndef HEAVY_DUTY_TRUCK_H
#define HEAVY_DUTY_TRUCK_H
#include <string.h>
#include <iostream>
#include "Truck.h"


class Heavy_Duty_Truck :public Truck
{
    public:
        Heavy_Duty_Truck();
        ~Heavy_Duty_Truck();
        //getters
        double getTonnage() const;
        int getNoOfWheels() const;

        //setters
        double setTonnage(double Tonnage) const;
        int setNoOfWheels(int NoOfWheels) const;
        //copy constr...
        Heavy_Duty_Truck(const Heavy_Duty_Truck &obj);


    private:
        double Tonnage;
        int NoOfWheels;
};

#endif // HEAVY_DUTY_TRUCK_H
