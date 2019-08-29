//
//  VideoCamera.cpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#include "VideoCamera.hpp"


std::string VideoCamera::ServiceName(){
    return "VideoCamera";
}
std::string VideoCamera::Can(){
    return "take some videos";
}
std::string VideoCamera::ProviderProperty(){
    return "empty";
}
bool VideoCamera::UseKeyboard(){
    return true;
}

bool VideoCamera::Record(){
    if(!isRecording){
        isRecording = true;
        std::cout<< "Recording" << std::endl;
        return true;
    }else{
        std::cout<< "It's already Recording,you need to stop first" << std::endl;
        return false;
    }
}
bool VideoCamera::StopRecording(){

    if(isRecording){
        std::cout<< "stopped" << std::endl;
        return true;
    }else{
        std::cout<< "can not stop if not recording" << std::endl;
        return false;
    }
}
