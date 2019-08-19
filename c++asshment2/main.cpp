#include <iostream>
#include <string>
#include "SinaIsOnDate.h"

using namespace std;

int main()
{
    // the driver to run the code
    strDate("i`m driver\n" ,1);

    SinaIsOnDate* aSinaIsOnDate = new SinaIsOnDate();
    (*aSinaIsOnDate).printSinaDate();

    SinaIsOnDate* bSinaIsOnDate = new SinaIsOnDate(7,19,1974);
    (*bSinaIsOnDate).printSinaDate();

    SinaIsOnDate* cSinaIsOnDate = new SinaIsOnDate(1,1,2020);
    (*cSinaIsOnDate).printSinaDate();


}
