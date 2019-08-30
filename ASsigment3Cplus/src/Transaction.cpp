#include "Transaction.h"
#include "../Functions.h"
// Default constructor
Transaction::Transaction():Transaction(0, "Saving", new SimpleTime(), new SimpleDate()){
}

// Overloaded constructor
Transaction::Transaction(int amount, std::string acountType, SimpleTime *time, SimpleDate *date){
    if (checkAmount(amount)&&checkAccountType(acountType)){
        this->amount = amount;
        this->acountType = acountType;
        this->time = time;
        this->date = date;
        //strColor("\n**** overloaded constructor called with: ", 8, 1); print(); strColor(" ****\n", 8, 1);
    }else{
        strColor("\nTransaction information you entered as overloaded constructor is not valid!\n", 12, 1);
    }
}

// Copy constructor
Transaction::Transaction(const Transaction *obj){
    if (checkAmount(amount)&&checkAccountType(acountType)){
        this->amount = obj->amount;
        this->acountType = obj->acountType;
        this->time = obj->time;
        this->date = obj->date;
        //strColor("\n**** copy constructor called with: ", 8, 1); print(); strColor(" ****\n", 8, 1);
    }else{
        strColor("\nTransaction information you entered as copy constructor is not valid!\n", 12, 1);
    }
}

// Destructor
Transaction::~Transaction(){
    delete time;
    delete date;
}

void Transaction::setTransaction(int amount, std::string acountType, SimpleTime *time, SimpleDate *date){
    if (checkAmount(amount)&&checkAccountType(acountType)){
        this->amount = amount;
        this->acountType = acountType;
        this->time = time;
        this->date = date;
        strColor("Your transaction by: ", 8, 1); print(); strColor(" Registered.", 8, 1);
    }else{
        strColor("\nAmount or account type you entered is not valid!\n", 12, 1);
    }
}

void Transaction::setAmount(int amount){
    if (checkAmount(amount)){
        this->amount = amount;
    }else{
        strColor("\nAmount you entered is not valid!\n", 12, 1);
    }
}

int Transaction::getAmount(){
    return this->amount;
}

void Transaction::setAccountType(std::string acountType){
    if (checkAccountType(acountType)){
        this->acountType = acountType;
    }else{
        strColor("\nAccount type you entered is not valid!\n", 12, 1);
    }
}

std::string Transaction::getAccountType(){
    return this->acountType;
}

void Transaction::setTime(SimpleTime *time){
    this->time = time;
}

SimpleTime Transaction::getTime(){
    return this->time;
}

void Transaction::setTime(int hour, int minute, int second, std::string zone){
    this->time = new SimpleTime{hour, minute, second, zone};
}

void Transaction::setDate(SimpleDate *date){
    this->date = date;
}

SimpleDate Transaction::getDate(){
    return this->date;
}

void Transaction::setDate (int month, int day, int year, std::string dayofweek){
    this->date = new SimpleDate(month, day, year, dayofweek);
}

void Transaction::print(){
    strColor("Amount: ", 8, 1); strColor(std::to_string(this->amount), 14, 1);
    strColor(", Account Type: ", 8, 1); strColor(this->acountType, 14, 1);
    strColor(", Time: ", 8, 1); this->time->printCivilian();
    strColor(", Date: ", 8, 1); this->date->print();
}

bool Transaction::checkAmount(int amount){
    return amount>-1 ? true : false;
}

bool Transaction::checkAccountType(std::string acountType){
    return acountType=="Saving"||acountType=="Checking"||acountType=="Credit" ? true : false;
}
