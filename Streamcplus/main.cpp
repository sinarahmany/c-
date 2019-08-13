#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    std::ifstream Readobj;


//    Readobj.open("main.txt");
//
//
//    std::string Name;
//    int Age;
//    bool isItTrue;
//
//    while(!Readobj.eof()){
//        Readobj >> Name >> Age >> isItTrue;
//        //bool alpha iin the line below changes the value of bool from 0 to true or false
//        std::cout << "name : "<< std::left <<std::setw(10)<<Name;
//        std::cout <<"| Age is :"<<std::setw(4)<<Age <<std::right;
//        std::cout <<" | That is : "<< std::boolalpha <<isItTrue <<std::endl;
//    }
    //this while down also print the txt file but we can not manipulate it
/*
    std::string line;
    while (std::getline(Readobj,line)){
        std::cout <<line <<std::endl;
    }
    */


    //close the file
   // Readobj.close();
    //***************************************************************************************************
   /* Readobj.open("cha.txt");

    std::string answerKey;
    int Score;
    double Total=0;
    std::string sName;
    std::string sAnswer;
    Readobj >> answerKey;
    while(!Readobj.eof()){
        Readobj >> sName >> sAnswer;
        Score=0;
        std::cout << "name : "<< std::left <<std::setw(10)<<sName;
        for(int i=0;i<5;i++){
            if(answerKey[i]==sAnswer[i]){
                Score=Score+1;
            }
        }
        std::cout <<"| score is :"<<std::setw(4)<<Score <<std::right<<std::endl;
        Total=Total+Score;
    }
    double average=Total/5;
    std::cout << "------------------------------"<< std::endl;
    std::cout<< "The Average is : "<<average;
    Readobj.close();*/
    //*******************************************************************************
    Readobj.open("Info.txt");
    std::string text;
    int counter=0;
    std::ofstream outfile ("test.txt",std::ios::app);
    while(getline(Readobj,text)){

        counter++;
        std::cout <<std::setw(3)<<std::left<< counter <<text<<std::endl ; ;
        outfile <<std::setw(3)<<std::left<< counter <<text<<std::endl ;
    }





    return 0;
}
