#include <iostream>

#include <string>
#include "functions.h"


#include <stack>


using namespace std;

void bla_bla();

int main()
{

bla_bla();

    //stackMenuWithPointer();

    return 0;
}
void bla_bla(){
    char arri[20];
    std::cin>>arri;
    std::cout<<sizeof(arri)<<std::endl;
    for(int i =0;i<sizeof(arri);i++){

    std::cout<<arri[i]<<"*";


    }
}

