#ifndef VEHICLE_H
#define VEHICLE_H
#include <string.h>
#include <iostream>


class Vehicle
{
private:
    int vin;
    std::string make;
    std::string model;
    std::string color;

public:
    //default constructor
    Vehicle();
    //overloaded constructor
    Vehicle(int vin ,std::string make,std::string model,std::string color);
    //copy constructor
    Vehicle(Vehicle const &obj);
    //destructor
    ~Vehicle();

    //setter
    void setVin(int vin);
    void setMake(std::string make);
    void setModel(std::string model);
    void setColor(std::string color);

    //getter
    int getVin();
    std::string getMake();
    std::string getModel();
    std::string getColor();

    //functions
    void toString();
};

#endif // VEHICLE_H
