#ifndef TRUCK_H
#define TRUCK_H
#include <iostream>
#include <string.h>
#include <Vehicle.h>


class Truck : public Vehicle
{

private:

    bool cabSize;
    int horsePower;
    bool hasWinch;

public:
    //default constructor
    Truck();
    //overloaded constructor
    Truck(bool cabSize, int horsePower, bool hasWinch,int vin ,std::string make,std::string model,std::string color);
    Truck(bool cabSize, int horsePower, bool hasWinch);
    //copy constructor
    Truck(Truck const &obj);
    //destructor
    ~Truck();

    //setter
    void setCabSize(bool cabSize);
    void setHorsePower(int horsePower);
    void setHasWinch(bool hasWinch);

    //getter
    bool getCabSize();
    int getHorsePower();
    bool getHasWinch();

    //functions
        void toString();
};

#endif // TRUCK_H
