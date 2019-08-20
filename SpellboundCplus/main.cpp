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
void case3();
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
            case 3:
                case3();
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
void case3(){
    std::ifstream Readobj;
    string line;
    Readobj.open("Random.txt");

    std::ofstream temp ("MRandom.txt");

     while(!Readobj.eof()){
            //Readobj >>counter>>fisrt.Name>>fisrt.LastName>>fisrt.PhoneNum>>fisrt.Email>>Genderstring
        string Search;
        cout<<"Type your ID : \n";
        cin>>Search;


               while(Readobj.good())
               {
                   getline(Readobj,line); // get line from file
                   std::string str2 = line.substr (0,1);//read from postion zero till lenght of one
                   if(str2==Search)
                   {
                        //cout <<line <<endl;
                        cout <<"Found!"<<std::endl;
                        cout << "ID : " << line.substr (0,1)<<std::endl;
                        cout << "Name : " << line.substr (12,7) <<std::endl;
                        cout << "Last Name : " << line.substr (24,10) <<std::endl;
                        cout << "Phone Number : " << line.substr (40,10) <<std::endl;
                        cout << "Email : " << line.substr (59,10) <<std::endl;
                        cout << "Gender : " << line.substr (73,10) <<std::endl;

                        cout << "\n                 ->Name Type 1 \n"
                        "To Modify your   ->Last Name type 2 \n"
                        "                 ->Phone Number type 3 \n"
                        "                 ->Email type 4 \n\n";
                        int choice;
                        cin>>choice;
                        string modifier;
                        std::string str3 = line.substr(12,7);

                        switch(choice){
                            case 1:
                                cout<< "Type your new Name"<<endl;
                                cin>>modifier;
                                temp<<std::left<<std::setw(12)<<line.substr (0,1)<<std::left<<std::setw(12)<<modifier<<std::left<<std::setw(16)
                                <<line.substr (24,10)<<std::left<<std::setw(19)<<line.substr (40,10)<<
                                std::left<<std::setw(14)<<line.substr (59,10)<<std::left<<std::setw(12)<<line.substr (73,10) <<std::endl;;
                                //std::ofstream outfile ("Random.txt",std::ios::app);
                                //str3=modifier;
                                //outfile<<std::left<<std::setw(12)<<str3;



                                break;
                            case 2:
                                cout<< "Type your new Last Name"<<endl;
                                break;
                            case 3:
                                cout<< "Type your new Phone"<<endl;
                                break;
                            case 4:
                                cout<< "Type your new email"<<endl;
                                break;
                            default:
                                cout<< "not in the menu"<<endl;
                                break;
                        }





                   }
                   else{
                    temp<<line<<endl;

                   }


               }
                break;


        }
}



void case5(){
    std::ifstream Readobj;
    string line;
    Readobj.open("Random.txt");
    while(Readobj >>counter>>fisrt.Name>>fisrt.LastName>>fisrt.PhoneNum>>fisrt.Email>>Genderstring){
        string Search;
        cout<<"Type your ID : \n";
        cin>>Search;


               while(Readobj.good())
               {
                   getline(Readobj,line); // get line from file
                   std::string str2 = line.substr (0,1);//read from postion zero till lenght of one
                   if(str2==Search) // string::npos is returned if string is not found
                   {
                        //cout <<line <<endl;
                        cout <<"Found!"<<std::endl;
                        cout << "ID : " << line.substr (0,1)<<std::endl;
                        cout << "Name : " << line.substr (12,7) <<std::endl;
                        cout << "Last Name : " << line.substr (24,10) <<std::endl;
                        cout << "Phone Number : " << line.substr (40,10) <<std::endl;
                        cout << "Email : " << line.substr (59,10) <<std::endl;
                        cout << "Gender : " << line.substr (73,10) <<std::endl;
                        break;


                   }


               }
                break;


        }
}
