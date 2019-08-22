#ifndef TRUCK_H
#define TRUCK_H
#include <iostream>
#include <string.h>
#include <Vehicle.h>


class Truck : public Vehicle
{
    public:
        Truck();
        ~Truck();
        //getters
        std::string getCabSize() const;
        int getHorsePower() const;
        bool getHasWinch() const;
        //setters
        std::string setCabSize(std::string CabSize) const;
        int setHorsePower(int HorsePower) const;
        bool setHasWinch(bool HasWinch) const;
        //copy constr...
        Truck(const Truck &obj);


    private:
        std::string CabSize;
        int HorsePower;
        bool HasWinch;
};

#endif // TRUCK_H
