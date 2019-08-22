#ifndef PASSENGER_VEHICLE_H
#define PASSENGER_VEHICLE_H
#include <Vehicle.h>
#include <string.h>
#include <iostream>


class Passenger_vehicle : public Vehicle
{
    public:
        Passenger_vehicle();
        ~Passenger_vehicle();
        //getters
        std::string getType() const;
        int getNoOfPassengers() const;

        //setters
        std::string setType(std::string type) const;
        int setNoOfPassengers(int model) const;

        //copy constr...
        Passenger_vehicle(const Passenger_vehicle &obj);



    private:
    std::string type;
    int NoOfPassengers;
};

#endif // PASSENGER_VEHICLE_H
