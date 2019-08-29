//
//  MusicPlayer.cpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#include "MusicPlayer.hpp"


//default constructor
MusicPlayer::MusicPlayer()
:MusicPlayer("nothing"){}

//overloaded constructor
MusicPlayer::MusicPlayer(std::string musicFile){
    this->musicFile = musicFile;
}

//copy constructor
MusicPlayer::MusicPlayer(MusicPlayer const &obj){
    this->musicFile = obj.musicFile;

}
//destructor
MusicPlayer::~MusicPlayer(){}

//setters

void MusicPlayer::setMusicFile(std::string musicFile){
    this->musicFile = musicFile;

}

//getters
std::string MusicPlayer::getMusicFile(){
    return musicFile;
}


std::string MusicPlayer::ServiceName(){
    return "MusicPlayer";
}

std::string MusicPlayer::Can(){
    return "can Play some music";
}
std::string MusicPlayer::ProviderProperty(){
    return "empty";
}
bool MusicPlayer::UseKeyboard(){
    return true;
}
