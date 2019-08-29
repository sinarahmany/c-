//
//  Gmail.cpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#include "Gmail.hpp"

std::string Gmail::ServiceName(){
    return "Gmail";
}

std::string Gmail::Can(){
    return "can send and receive message";
}
std::string Gmail::ProviderProperty(){
    return "empty";
}
bool Gmail::UseKeyboard(){
    return true;
}

bool Gmail::SignIn(std::string email){
    return true;
}
bool Gmail::SignOut(){
    return true;
}
