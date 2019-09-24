#include <iostream>
#include <string>
#include "Car.h"
#include "Engine.h"
#include "Plane.h"
#include "Bike.h"

using namespace std;

int main()
{

    try {

        Plane bla(6,200);
        bla.toString();

        cout<<"-------------------------------------"<<endl;

        Plane second(5,190);
        second.toString();

        cout<<"-------------------------------------"<<endl;

        Plane total = bla + second;
        total.toString();

        cout<<"-------------------------------------"<<endl;

        Car v(4,350,"dd","sd",4,"md");
        v.showHP();

        v.showEngineType();
        v.showCylinders();
        v.showHP();

        cout<<"-------------------------------------"<<endl;

        Bike d(-1,2,"Good type","Canada",6);
        d.toString();

    } catch (std::logic_error &ex) {
        std::cout << "ERROR : " << ex.what() << std::endl;
    }

}
