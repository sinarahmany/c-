#include <iostream>
#include <string>
#include <SinaIsOnDate.h>

using namespace std;

int main()
{
    cout << "Goodbye world!" << endl;

    SinaIsOnDate nn(2019,7,11);
    nn.whatTimeIsIt();
    //call the copy con..
    //SinaIsOnDate SinaIsOnDate(nn);
    SinaIsOnDate mm (1,1,2);
    mm.whatTimeWillIt();


}
