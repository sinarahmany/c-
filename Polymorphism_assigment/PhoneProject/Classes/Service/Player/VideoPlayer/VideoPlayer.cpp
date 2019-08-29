//
//  VideoPlayer.cpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#include "VideoPlayer.hpp"


//default constructor
VideoPlayer::VideoPlayer()
:VideoPlayer("nothing"){}

//overloaded constructor
VideoPlayer::VideoPlayer(std::string videoFile){
    this->videoFile = videoFile;
}

//copy constructor
VideoPlayer::VideoPlayer(VideoPlayer const &obj){
    this->videoFile = obj.videoFile;

}
//destructor
VideoPlayer::~VideoPlayer(){}

//setters

void VideoPlayer::setVideoFile(std::string videoFile){
    this->videoFile = videoFile;

}

//getters
std::string VideoPlayer::getVideoFile(){
    return videoFile;
}

std::string VideoPlayer::ServiceName(){
    return "VideoPlayer";
}

std::string VideoPlayer::Can(){
    return "can Play some music";
}
std::string VideoPlayer::ProviderProperty(){
    return "empty";
}
bool VideoPlayer::UseKeyboard(){
    return true;
}
