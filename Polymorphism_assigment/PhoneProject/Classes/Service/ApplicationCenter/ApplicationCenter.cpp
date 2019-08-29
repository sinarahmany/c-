//
//  ApplicationCenter.cpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#include "ApplicationCenter.hpp"


std::string ApplicationCenter::ServiceName(){
    return "Applications";
}

std::string ApplicationCenter::Can(){
    return "can send and receive message";
}
std::string ApplicationCenter::ProviderProperty(){
    return "empty";
}
bool ApplicationCenter::UseKeyboard(){
    return true;
}

std::string ApplicationCenter::DownloadApp(std::string appNmae){
    return "Downloading the app";
}
std::string ApplicationCenter::DeleteApp(std::string appNmae){
     return "Deleting the app";
}
std::string ApplicationCenter::OpenApp(std::string appNmae){
    return "Openning the app";
}
