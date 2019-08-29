//
//  Phone.cpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#include "Phone.hpp"


std::string Phone::ServiceName(){
    return "Phone";
}

std::string Phone::Can(){
    return "can place calls, receive calls, decline calls, set the voice volume";
}
std::string Phone::ProviderProperty(){
   return "empty";
}
bool Phone::UseKeyboard(){
    return true;
}

std::string Phone::PlaceCall(){
    return "It is calling anumber";
}

std::string Phone::ReceiveCall(){
    return "receiving call";
}

int Phone::SetVoiceVolume(int numb){
    if(numb>0 && numb<=10){
        return numb;
            }else{
                if(numb>10){
                    return 10;
                }else{
                    return 0;
                }
    }
}
std::string Phone::DeclineCall(){
    return "Declining call";
}
