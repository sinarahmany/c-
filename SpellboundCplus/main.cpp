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
void case5();
int counter;
Customers fisrt ;
string Genderstring;
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
            case 5 :
                case5();
                break;
            case 6 :
                flag=false;
                cout<<"You try to Exit but it don`t";
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
//    outfile<<std::left<<std::setw(12)<<"ID"<<std::left<<std::setw(12)<<"Name";
//    outfile<<std::left<<std::setw(16)<<"LastName"<<std::left<<std::setw(19)<<"Phone-Number";
//    outfile<<std::left<<std::setw(14)<<"Email"<<std::left<<std::setw(12)<<"Gender"<<std::endl;
}

void case2(){


    std::ifstream Readobj;
    Readobj.open("Random.txt");
    while(Readobj >>counter>>fisrt.Name>>fisrt.LastName>>fisrt.PhoneNum>>fisrt.Email>>Genderstring){

    }
    counter++;
    std::ofstream outfile ("Random.txt",std::ios::app);
    outfile<<std::left<<std::setw(12)<<counter;
    cout<<"Type you Name \n";
    cin>>fisrt.Name;
    outfile<<std::left<<std::setw(12)<<fisrt.Name;
    cout<<"Type you LastName \n";
    cin>>fisrt.LastName;
    outfile<<std::left<<std::setw(16)<<fisrt.LastName;
    cout<<"Type you Phone Number \n";
    cin>>fisrt.PhoneNum;
    outfile<<std::left<<std::setw(19)<<fisrt.PhoneNum;
    cout<<"Type you Email \n";
    cin>>fisrt.Email;
    outfile<<std::left<<std::setw(14)<<fisrt.Email;
    cout<<"Gender---> [ 0 For Male , 1 For Female ]";
    cin>>fisrt.Gender;
    if(fisrt.Gender==0){
        Genderstring="Male";
    }else{
        Genderstring="Female";
    }
    outfile<<std::left<<std::setw(12)<<Genderstring<<std::endl;


}


void case5(){
    std::ifstream Readobj;
    string line;
    Readobj.open("Random.txt");
    while(Readobj >>counter>>fisrt.Name>>fisrt.LastName>>fisrt.PhoneNum>>fisrt.Email>>Genderstring){
        string Search;
        cout<<"Type your ID : \n";
        cin>>Search;

               size_t pos;
               while(Readobj.good())
               {
                   getline(Readobj,line); // get line from file
                   pos=line.find(Search); // search
                   if(pos!=string::npos) // string::npos is returned if string is not found
                   {
                       cout <<"Found!"<<std::endl;
                      cout << "ID : " << counter<<std::endl;
                       cout << "Name : " << fisrt.Name <<std::endl;
                       break;


                   }


               }
                break;


        }
}
