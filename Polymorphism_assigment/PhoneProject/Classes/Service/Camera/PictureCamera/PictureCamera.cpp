//
//  PictureCamera.cpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#include "PictureCamera.hpp"

std::string PictureCamera::ServiceName(){
    return "PictureCamera";
}
std::string PictureCamera::Can(){
    return "take some pictures";
}
std::string PictureCamera::ProviderProperty(){
    return "empty";
}
bool PictureCamera::UseKeyboard(){
    return true;
}

bool PictureCamera::TakePicture(){
    return true;
}
