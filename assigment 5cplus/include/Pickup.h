#ifndef PICKUP_H
#define PICKUP_H
#include "Truck.h"
#include <string.h>
#include <iostream>


class Pickup :public Truck
{
private:

    std::string usage;
    int length;


public:
    //default constructor
    Pickup();
    //overloaded constructor
    Pickup(std::string usage, int length,bool cabSize, int horsePower, bool hasWinch);
    //copy constructor
    Pickup(Pickup const &obj);
    //destructor
    ~Pickup();

    //setter
    void setUsage(std::string usage);
    void setLength(int length);

    //getter
    std::string getUsage();
    int getLength();

    //functions
        void toString();
};

#endif // PICKUP_H
