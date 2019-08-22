#ifndef VEHICLE_H
#define VEHICLE_H
#include <string.h>
#include <iostream>


class Vehicle
{
    public:
        Vehicle();
        ~Vehicle();
        //getters
        std::string getMake() const;
        std::string getModel() const;
        std::string getcolor() const;
        //setters
        std::string setMake(std::string Make) const;
        std::string setModel(std::string model) const;
        std::string setcolor(std::string color) const;
        //overloaded const...
        Vehicle(std::string Makeval,std::string Modelval,std::string colorval,int VINval);
        //copy constr...
        Vehicle(const Vehicle &obj);

    private:
        int VIN;
        std::string Make,model,color;
};

#endif // VEHICLE_H
