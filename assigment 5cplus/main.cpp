#include <iostream>
#include <string.h>
#include <Vehicle.h>

using namespace std;

class Truck : public Vehicle{
    string CabSize;
    int HorsePower;
    bool HasWinch;

};

class Passenger_vehicle :public Vehicle{
    string type;
    int NoOfPassengers;
};

class Heavy_Duty_Truck :public Truck {
    double Tonnage;
    int NoOfWheels;
};

class Pickup :public Truck{
    string Usage;
    int Length;
};

int main()
{

    cout << "Goodbye cruel world!" << endl;
    return 0;
}
