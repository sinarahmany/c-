#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <ctype.h>
#include <cstring>

using namespace std;
void f1();
void f2();
void f3();
void textDeatails();
int main()
{
    textDeatails();
    return 0;
}









void f1(){
std::ifstream Readobj;


    Readobj.open("main.txt");


    std::string Name;
    int Age;
    bool isItTrue;

    while(!Readobj.eof()){
        Readobj >> Name >> Age >> isItTrue;
        //bool alpha in the line below changes the value of bool from 0 to true or false
        std::cout << "name : "<< std::left <<std::setw(10)<<Name;
        std::cout <<"| Age is :"<<std::setw(4)<<Age <<std::right;
        std::cout <<" | That is : "<< std::boolalpha <<isItTrue <<std::endl;
    }
    //this while down also print the txt file but we can not manipulate it

    std::string line;
    while (std::getline(Readobj,line)){
        std::cout <<line <<std::endl;
    }
    //close the file
    Readobj.close();
}


void f2(){
    std::ifstream Readobj;
    Readobj.open("cha.txt");

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
    Readobj.close();

}


void f3(){
    std::ifstream Readobj;
    Readobj.open("Info.txt");
    std::string text;
    int counter=0;
    std::ofstream outfile ("test.txt",std::ios::app);
    while(getline(Readobj,text)){

        counter++;
        std::cout <<std::setw(3)<<std::left<< counter <<text<<std::endl ; ;
        outfile <<std::setw(3)<<std::left<< counter <<text<<std::endl ;
    }

//use get file cause it reads the whole line and then go to next line but readobj.eof goes word by word and here we don`t want that
}
void textDeatails (){
    //it just shows the upper case words
    /*std::string str {"Let`s check and use cType header for finding some staff in here!! "};
    for(int i = 0;i<str.length();i++){
        if(isupper(str[i])){
            std::cout << str[i]<< " - ";
        }
    }
    */
    //**********************************************************************************
    int intDigit=0, intSpace=0, intPunchuation=0, intUpper=0, intLower=0, intAlphaNum=0, intWord=0;
    char c;
    std::string strSLine;
    std::ofstream dFile;
    dFile.open("dFile.txt"); //, std::ios_base::app);
    std::ifstream sFile ("littleRed.txt");
    if (sFile.is_open()){
        while(sFile.get(c)){
            if (isdigit(c)) intDigit++;
            if (isspace(c)) intSpace++;
            if (ispunct(c)) intPunchuation++;
            if (isupper(c)) intUpper++;
            if (islower(c)) intLower++;
            if (isalpha(c)) intAlphaNum++;
            //if (c) {intWord++};
        }
            dFile<<"1- Digit Count:          "<<std::setw(4)<<intDigit<<std::right<<std::endl;
            dFile<<"2- intSpace Count:       "<<std::setw(4)<<intSpace<<std::right<<std::endl;
            dFile<<"3- intPunchuation Count: "<<std::setw(4)<<intPunchuation<<std::right<<std::endl;
            dFile<<"4- intUpper Count:       "<<std::setw(4)<<intUpper<<std::right<<std::endl;
            dFile<<"5- intLower Count:       "<<std::setw(4)<<intLower<<std::right<<std::endl;
            dFile<<"6- intAlphaNum Count:    "<<std::setw(4)<<intAlphaNum<<std::right<<std::endl;
            dFile<<"7- Word Count:           "<<std::setw(4)<<intSpace<<std::right<<std::endl;
            //-------
            std::cout<<"1- Digit Count:          "<<std::setw(4)<<intDigit<<std::right<<std::endl;
            std::cout<<"2- intSpace Count:       "<<std::setw(4)<<intSpace<<std::right<<std::endl;
            std::cout<<"3- intPunchuation Count: "<<std::setw(4)<<intPunchuation<<std::right<<std::endl;
            std::cout<<"4- intUpper Count:       "<<std::setw(4)<<intUpper<<std::right<<std::endl;
            std::cout<<"5- intLower Count:       "<<std::setw(4)<<intLower<<std::right<<std::endl;
            std::cout<<"6- intAlphaNum Count:    "<<std::setw(4)<<intAlphaNum<<std::right<<std::endl;
            std::cout<<"7- Word Count:           "<<std::setw(4)<<intSpace<<std::right<<std::endl;
        sFile.close();
    }
    else std::cout << "Unable to open file";
    dFile.close();

}
