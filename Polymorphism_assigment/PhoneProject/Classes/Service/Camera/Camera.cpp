//
//  Camera.cpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#include "Camera.hpp"

std::string Camera::ServiceName(){
    return "Camera";
}
std::string Camera::Can(){
    return "take some pictures and videos";
}
std::string Camera::ProviderProperty(){
    return "empty";
}
bool Camera::UseKeyboard(){
    return true;
}

bool Camera::OpenCamera(){
    return true;
}
