//
//  functions.cpp
//  Midterm
//
//  Created by Rajabi Chavari, Hamed on 2019-08-30.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#include "functions.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
using namespace std;

void creatRandomFile(){

    std::ofstream writeFile;
    writeFile.open("../files/myFile.txt");
    writeFile.close();
}

void case1(){
    std::ofstream writeFile;
    writeFile.open("../files/myFile.txt",std::ios::app);

    int newId;
    std::string newName;
    int newHeight;
    int newWeight;
    bool newEatMeat;
    int newYear;
    std::string newMonth;
    std::string newFromWhere;

    std::cout << "what is the id? " << std::endl;
    std::cin >> newId;
    std::cout << "what is the name? " << std::endl;
    std::cin >> newName;
    std::cout << "what is the height? " << std::endl;
    std::cin >> newHeight;
    std::cout << "what is the weight? " << std::endl;
    std::cin >> newWeight;
    std::cout << "does it eat meat? " << std::endl;
    std::cin >> newEatMeat;
    std::cout << "what is the year? " << std::endl;
    std::cin >> newYear;
    std::cout << "what is the month? " << std::endl;
    std::cin >> newMonth;
    std::cout << "what is the fromWhere? " << std::endl;
    std::cin >> newFromWhere;

    Mammal newOne(newId,newName,newHeight,newWeight,new Date(newYear,newMonth,newFromWhere),newEatMeat);
    writeFile << newOne.toString()<<"\n";
    writeFile.close();
    std::cout << "the mammal's information saved"<<std::endl;
}

void case2(){
    std::ofstream writeFile;
    writeFile.open("../files/myFile.txt",std::ios::app);
    //if it is a bird
    int newId;
    std::string newName;
    int newHeight;
    int newWeight;
    bool newIsWild;
    int newYear;
    std::string newMonth;
    std::string newFromWhere;

    std::cout << "what is the id? " << std::endl;
    std::cin >> newId;
    std::cout << "what is the name? " << std::endl;
    std::cin >> newName;
    std::cout << "what is the height? " << std::endl;
    std::cin >> newHeight;
    std::cout << "what is the weight? " << std::endl;
    std::cin >> newWeight;
    std::cout << "is it wild? " << std::endl;
    std::cin >> newIsWild;
    std::cout << "what is the year? " << std::endl;
    std::cin >> newYear;
    std::cout << "what is the month? " << std::endl;
    std::cin >> newMonth;
    std::cout << "what is the fromWhere? " << std::endl;
    std::cin >> newFromWhere;

    Bird newOne(newId,newName,newHeight,newWeight,new Date(newYear,newMonth,newFromWhere),newIsWild);
    writeFile << newOne.toString()<<"\n";
    std::cout << "the bird's information saved"<<std::endl;
    writeFile.close();
}

void addAnimal(){

    int choice;
    do
    {
        printf("1.Mammal | 2.Bird |3.Exit ");
        scanf("%d", &choice);

        switch (choice)
        {

            case 1:
                case1();
                break;

            case 2:
                case2();
                break;

            case 3:
                break;
            default:
                printf("please enter a valid information\n\n");
                break;
        }

    } while (choice != 3);

}

void case1Mod(){
    std::ifstream readFile;
    readFile.open("../files/myFile.txt");
    std::string searchName;
    std::cout << "modifying : what is the name? " << std::endl;
    std::cin >> searchName;

    std::string line;
    bool first=true;
    while (std::getline(readFile,line)) {

        if(line.find(searchName) < 10000  ){
            //found it
            if(first){
                std::ofstream writeFile;
                writeFile.open("../files/myFileNew.txt");
            }else{
                std::ofstream writeFile;
                writeFile.open("../files/myFileNew.txt",std::ios::app);

                int newId;
                std::string newName;
                int newHeight;
                int newWeight;
                bool newEatMeat;
                int newYear;
                std::string newMonth;
                std::string newFromWhere;

                std::cout << "what is the id? " << std::endl;
                std::cin >> newId;
                std::cout << "what is the name? " << std::endl;
                std::cin >> newName;
                std::cout << "what is the height? " << std::endl;
                std::cin >> newHeight;
                std::cout << "what is the weight? " << std::endl;
                std::cin >> newWeight;
                std::cout << "does it eat meat? " << std::endl;
                std::cin >> newEatMeat;
                std::cout << "what is the year? " << std::endl;
                std::cin >> newYear;
                std::cout << "what is the month? " << std::endl;
                std::cin >> newMonth;
                std::cout << "what is the fromWhere? " << std::endl;
                std::cin >> newFromWhere;

                Mammal newOne(newId,newName,newHeight,newWeight,new Date(newYear,newMonth,newFromWhere),newEatMeat);
                writeFile << newOne.toString()<<"\n";
                writeFile.close();
                first=false;
                std::cout << searchName << "'s information was modified" <<std::endl;
            }

        }else{
            if(first){
                std::ofstream writeFile;
                writeFile.open("../files/myFileNew.txt");
                writeFile << line <<"\n";
                first=false;

            }
            else{
                std::ofstream writeFile;
                writeFile.open("../files/myFileNew.txt",std::ios::app);
                writeFile << line <<"\n";
            }

        }

        std::ifstream readFile;
        readFile.open("../files/myFileNew.txt");
        if (readFile.fail()) {
            std::cerr << "it is not readable" << std::endl;
        }

        std::string line;
        std::ofstream writeFile;
        creatRandomFile();
        writeFile.open("../files/myFile.txt",std::ios::app);
        while (std::getline(readFile,line)) {
            writeFile << line << "\n";
        }
    }
    remove("../files/myFileNew.txt");

}


void case2Mod(){
    std::ifstream readFile;
    readFile.open("../files/myFile.txt");
    std::string searchName;
    std::cout << "modifying : what is the name? " << std::endl;
    std::cin >> searchName;

    std::string line;
    bool first=true;
    while (std::getline(readFile,line)) {

        if(line.find(searchName) < 10000  ){
            //found it
            if(first){
                std::ofstream writeFile;
                writeFile.open("../files/myFileNew.txt");
            }else{
                std::ofstream writeFile;
                writeFile.open("../files/myFileNew.txt",std::ios::app);

                int newId;
                std::string newName;
                int newHeight;
                int newWeight;
                bool newIsWild;
                int newYear;
                std::string newMonth;
                std::string newFromWhere;

                std::cout << "what is the id? " << std::endl;
                std::cin >> newId;
                std::cout << "what is the name? " << std::endl;
                std::cin >> newName;
                std::cout << "what is the height? " << std::endl;
                std::cin >> newHeight;
                std::cout << "what is the weight? " << std::endl;
                std::cin >> newWeight;
                std::cout << "is it wild? " << std::endl;
                std::cin >> newIsWild;
                std::cout << "what is the year? " << std::endl;
                std::cin >> newYear;
                std::cout << "what is the month? " << std::endl;
                std::cin >> newMonth;
                std::cout << "what is the fromWhere? " << std::endl;
                std::cin >> newFromWhere;

                Bird newOne(newId,newName,newHeight,newWeight,new Date(newYear,newMonth,newFromWhere),newIsWild);
                writeFile << newOne.toString()<<"\n";
                writeFile.close();
                first=false;
                std::cout << searchName << "'s information was modified" <<std::endl;
            }

        }else{
            if(first){
                std::ofstream writeFile;
                writeFile.open("../files/myFileNew.txt");
                writeFile << line <<"\n";
                first=false;

            }
            else{
                std::ofstream writeFile;
                writeFile.open("../files/myFileNew.txt",std::ios::app);
                writeFile << line <<"\n";
            }

        }

        std::ifstream readFile;
        readFile.open("../files/myFileNew.txt");
        if (readFile.fail()) {
            std::cerr << "it is not readable" << std::endl;
        }

        std::string line;
        std::ofstream writeFile;
        creatRandomFile();
        writeFile.open("../files/myFile.txt",std::ios::app);
        while (std::getline(readFile,line)) {
            writeFile << line << "\n";
        }
    }
    remove("../files/myFileNew.txt");

}


void modifyAnimal(){
    int choice;
    do
    {
       cout <<"which item in this animal do you want to edit?"<<endl;
        cout << "1-name | 2-height | 3-weight " <<endl;
        cin>>choice;

        switch (choice)
        {

            case 1:
                case1Mod();
                break;

            case 2:
                case2Mod();
                break;

            case 3:
                break;
            default:
                printf("please enter a valid information\n\n");
                break;
        }

    } while (choice != 3);

}

void removeAnimal(){

    std::ifstream readFile;
    readFile.open("../files/myFile.txt");
    std::string searchName;
    std::cout << "deleting : what is the name? " << std::endl;
    std::cin >> searchName;

    std::string line;
    bool first=true;
    while (std::getline(readFile,line)) {

        if(line.find(searchName) < 10000  ){
            //found it
            std::cout << searchName << "'s information was deleted" <<std::endl;
            continue;

        }else{
            if(first){
                std::ofstream writeFile;
                //                writeFile.open("../files/myFileNew.txt");
                writeFile.open("../files/myFileNew.txt");
                writeFile << line <<"\n";
                first=false;

            }
            else{
                std::ofstream writeFile;
                writeFile.open("../files/myFileNew.txt",std::ios::app);
                writeFile << line <<"\n";
            }

        }

        std::ifstream readFile;
        readFile.open("../files/myFileNew.txt");
        if (readFile.fail()) {
            std::cerr << "it is not readable" << std::endl;
        }

        std::string line;
        std::ofstream writeFile;
        creatRandomFile();
        writeFile.open("../files/myFile.txt",std::ios::app);
        while (std::getline(readFile,line)) {
            writeFile << line << "\n";
            std::cout << "Removed"<<std::endl;
        }
    }
    remove("../files/myFileNew.txt");

}


