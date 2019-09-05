#include <iostream>
#include "func.h"
#include "Beer.h"
#include <vector>

using namespace std;


int main()
{

    printThis(10,"10");
    printThis(2.75,"Bla");
    printThis("Hello","hello");
    cout<<"*****-*-*-*-*--*--*--*---*---*--*--*--*-*-*-*-*-****"<<endl;

    Beer <string> beer("9 oz");
    cout << "the size of the beer is : "<<beer.getSource()<<endl;

    Beer <double> beer2(5.99);
    cout << "the Price of the beer is : "<<beer2.getSource()<<endl;

    Beer<double>* beer3 = new Beer<double>(5.0f);
    cout<<"The percentage of alchohol is : "<<beer3->getSource()<<endl;


}

