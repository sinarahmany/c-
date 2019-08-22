#ifndef PICKUP_H
#define PICKUP_H
#include "Truck.h"
#include <string.h>
#include <iostream>


class Pickup :public Truck
{
    public:
        Pickup();
        ~Pickup();
        //getters
        std::string getUsage() const;
        int getLength() const;
        //setters
        std::string setUsage(std::string Usage) const;
        int setLength(int Length) const;
        //copy constr...
        Pickup(const Pickup &obj);

    private:
        std::string Usage;
        int Length;
};

#endif // PICKUP_H
