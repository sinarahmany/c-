#include <iostream>

#include <string>
#include "functions.h"


using namespace std;



int main()
{
   // somedatatypes();

bool flag=true;
    while(flag=true){
        std::cout << "1-push a value to stack | 2-pop a value from stack | 3-print the value in stack \n" ;
        int choice;
        std::cin >> choice;
        switch(choice){
        case 1 :
            std::cout << "Please give me an integer value to push?";
            int val;
            std::cin >> val;
            push(val);
            break;
        case 2 :

            break;
        case 3 :
            //
            break;
        default:
            std::cout << "Not In The Menu \n" ;
            flag=false;

        }
    }



    return 0;
}

