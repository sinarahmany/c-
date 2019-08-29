//
//  Player.cpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#include "Player.hpp"


std::string Player::ServiceName(){
    return "Player";
}

std::string Player::Can(){
    return "can Play something";
}
std::string Player::ProviderProperty(){
    return "empty";
}
bool Player::UseKeyboard(){
    return true;
}

bool Player::Play(){
    if(!isPlaying){
        isPlaying = true;
        std::cout<< "Playing" << std::endl;
        return true;
    }else{
        std::cout<< "It's already Playing,you need to stop first" << std::endl;
        return false;
    }
}
bool Player::StopPlaying(){

    if(isPlaying){
        std::cout<< "stopped" << std::endl;
        return true;
    }else{
        std::cout<< "can not stop if not Playing" << std::endl;
        return false;
    }
}
