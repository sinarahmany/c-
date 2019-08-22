#include <iostream>
#include <string.h>
#include "Vehicle.h"
#include "Heavy_Duty_Truck.h"
#include "Passenger_vehicle.h"
#include "Pickup.h"
#include "Truck.h"

using namespace std;


int main()
{

    Vehicle car1("f","dd","dd",3);
    Truck truck1();
    Passenger_vehicle passenger1();
    Pickup Pick1();
    Heavy_Duty_Truck HDT();

    cout << "Goodbye cruel world!" << endl;
    return 0;
}
