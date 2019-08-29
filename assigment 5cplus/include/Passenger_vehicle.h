#ifndef PASSENGER_VEHICLE_H
#define PASSENGER_VEHICLE_H
#include <Vehicle.h>
#include <string.h>
#include <iostream>


class Passenger_vehicle : public Vehicle
{

private:

    std::string type;
    int numberOfPassengers;


public:
    //default constructor
    Passenger_vehicle();
    //overloaded constructor
    Passenger_vehicle(std::string type, int numberOfPassengers,int vin ,std::string make,std::string model,std::string color);
    //copy constructor
    Passenger_vehicle(Passenger_vehicle const &obj);
    //destructor
    ~Passenger_vehicle();

    //setter
    void setUsage(std::string type);
    void setLength(int numberOfPassengers);

    //getter
    std::string getType();
    int getNumberOfPassengers();

    //functions
        void toString();

};

#endif // PASSENGER_VEHICLE_H
