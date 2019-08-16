#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <ctype.h>
#include <cstring>
#include "Customers.h"

using namespace std;
void case1();
void case2();

    int counter;
int main()
{
    bool flag=true;
    int choice;
    while(flag=true){
    cout<<"1- Create Random file \n"
    "2- Add record \n"
    "3- Modify record \n"
    "4- Delete Record \n"
    "5- Search Record \n"
    "6- Exit \n\n";
        cin>>choice;
        switch(choice){
            case 1:
                case1();
                break;
            case 2:
                case2();
                break;
            default:
                cout<<"*** "<<choice<<" Is not in the menu ***\n\n\n";
                break;
        }
    }

    return 0;
}
void case1(){
    std::ofstream outfile ("Random.txt",std::ios::app);
   //  outfile<<"ID"<<"          "<<std::setw(4)<<"Name          "<<std::right;
   // outfile<<"LastName"<<"          "<<std::setw(4)<<"PhoneNumber          "<<std::right;
   // outfile<<"Email"<<"          "<<std::setw(4)<<"Gender          "<<std::right<<std::endl;
}

void case2(){
    Customers fisrt ;
    std::ifstream Readobj;
    Readobj.open("Random.txt");



    while(Readobj >>counter){
        Readobj >> counter;

    }
        counter++;
    std::ofstream outfile ("Random.txt",std::ios::app);
    outfile<<std::left<<std::setw(10)<<counter;
    cout<<"Type you Name \n";
    cin>>fisrt.Name;
    outfile<<std::left<<std::setw(10)<<fisrt.Name;
    cout<<"Type you LastName \n";
    cin>>fisrt.LastName;
    outfile<<std::left<<std::setw(10)<<fisrt.LastName;
    cout<<"Type you Email \n";
    cin>>fisrt.Email;
    outfile<<std::left<<std::setw(10)<<fisrt.Email;
    cout<<"Type you Phone Number \n";
    cin>>fisrt.PhoneNum;
    outfile<<std::left<<std::setw(10)<<fisrt.PhoneNum<<std::endl;

}
