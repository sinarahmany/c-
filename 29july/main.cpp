#include <iostream>

#include <string>
#include "functions.h"


#include <stack>


using namespace std;

string bla_bla(std::string strInput);

int main()
{
    string beeeep;
    std::cin >> beeeep ;
    std::cout << bla_bla(beeeep);

    //stackMenuWithPointer();

    return 0;
}


string bla_bla(std::string strInput){
    int n = strInput.length();
    string arru="";
    for(int i = n-1;i>=0;i --){
        arru+= strInput[i];

    }
        return arru;

}

