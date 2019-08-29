//
//  Calendar.cpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#include "Calendar.hpp"


std::string Calendar::ServiceName(){
    return "Calendar";
}

std::string Calendar::Can(){
    return "can send and receive message";
}
std::string Calendar::ProviderProperty(){
    return "empty";
}
bool Calendar::UseKeyboard(){
    return true;
}

std::string Calendar::NewEvent(){
    return "NewEvent";
}
std::string Calendar::ModifyEvent(){
    return "ModifyEvent";
}

std::string Calendar::DeleteEvent(){
    return "DeleteEvent";
}

