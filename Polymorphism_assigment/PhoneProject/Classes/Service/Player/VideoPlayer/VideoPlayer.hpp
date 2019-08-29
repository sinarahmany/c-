//
//  VideoPlayer.hpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#ifndef VideoPlayer_hpp
#define VideoPlayer_hpp

#include <stdio.h>
#include "../Player.hpp"
#include <string>

//create properties
//getters and setters
//constructors (default, overloaded, copy)
//destructor
//methods
class VideoPlayer : public Player{
private:
    std::string videoFile;

protected:

public:
    //default constructor
    VideoPlayer();
    //overloaded constructor
    VideoPlayer(std::string videoFile);
    //copy constructor
    VideoPlayer(VideoPlayer const &obj);
    //destructor
    ~VideoPlayer();

    //setters
    void setVideoFile(std::string videoFile);

    //getters
    std::string getVideoFile();

    virtual std::string Can() override;
    virtual std::string ServiceName() override;
    virtual std::string ProviderProperty()override;
    virtual bool UseKeyboard()override;

};

#endif /* VideoPlayer_hpp */
