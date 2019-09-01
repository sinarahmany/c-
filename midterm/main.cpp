#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <ctype.h>
#include <iomanip>
#include <sstream>
#include "Date.hpp"
#include "Mammal.h"
#include "Bird.h"
#include "functions.hpp"
using namespace std;

int main()
{
    creatRandomFile();

    Mammal cat;
    Bird blabla;

    //dynamic binding
    Animal * animals[2];
    animals[0]= &cat;
    animals[1]= &blabla;

    for(auto Animal : animals)
        std::cout << Animal->Sound() << std::endl;
    for(auto Animal : animals)
        std::cout << Animal->Move() << std::endl;

    std::cout << "" << std::endl;
    int choice;
    while(true){
        cout << "1-add an animal to the list\n"
        "2-modify the animal info \n"
        "3- remove an animal from list"<<endl;
        int choice;
        cin>>choice;
        switch(choice){
            case 1:
                addAnimal();


                break;
            case 2:
                cout <<"which item in this animal do you want to edit?"<<endl;
                cout << "1-name | 2-height | 3-weight " <<endl;
                 modifyAnimal();
                break;
            case 3:
                removeAnimal();
                break;
            default :
                cout<<"Not in the menu\n"<<endl;
                break;

        }
}
    return 0;
}
