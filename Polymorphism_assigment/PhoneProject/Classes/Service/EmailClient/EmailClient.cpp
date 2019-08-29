//
//  EmailClient.cpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#include "EmailClient.hpp"

std::string EmailClient::ServiceName(){
    return "Email";
}

std::string EmailClient::Can(){
    return "can send and receive message";
}
std::string EmailClient::ProviderProperty(){
    return "empty";
}
bool EmailClient::UseKeyboard(){
    return true;
}

bool EmailClient::Send(){
    return true;
}
bool EmailClient::Receive(){
    return true;
}
bool EmailClient::Reply(){
    return true;
}
bool EmailClient::Forward(){
    return true;
}
