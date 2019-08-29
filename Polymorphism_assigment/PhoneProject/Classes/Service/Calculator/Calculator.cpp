//
//  Calculator.cpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#include "Calculator.hpp"
#include <string>
std::string Calculator::ServiceName(){
    return "Calculator";
}

std::string Calculator::Can(){
    return "can send and receive message";
}
std::string Calculator::ProviderProperty(){
    return "empty";
}
bool Calculator::UseKeyboard(){
    return true;
}
double Calculator::Add(double a , double b){
    return a+b;
}
double Calculator::Subtract(double a , double b){
    return a-b;
}
double Calculator::Multiply(double a , double b){
    return a*b;
}
double Calculator::Divide(double a , double b){
    return a/b;
}
