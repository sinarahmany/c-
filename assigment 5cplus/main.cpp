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
    Vehicle bla(66 ,"bnm","3014","red");
    bla.toString();


    Truck trk(2,430,0,4,"mnb", "zxc","red");
    trk.toString();



    Heavy_Duty_Truck volvo(7.9, 6, 22, 222, 0);
    volvo.setVin(999);
    volvo.toString();


    Pickup pk2("4*4",3,3,290,0);
    pk2.toString();


    Passenger_vehicle passvih("sport", 2,90,"nbm","nmn","blue");
    passvih.toString();
    return 0;
}
