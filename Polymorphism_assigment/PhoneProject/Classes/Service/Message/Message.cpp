//
//  Message.cpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#include "Message.hpp"

std::string Message::ServiceName(){
    return "Message";
}

std::string Message::Can(){
    return "can send and receive message";
}
std::string Message::ProviderProperty(){
    return "empty";
}
bool Message::UseKeyboard(){
    return true;
}

bool Message::Send(){
    return true;
}
bool Message::Receive(){
    return true;
}
