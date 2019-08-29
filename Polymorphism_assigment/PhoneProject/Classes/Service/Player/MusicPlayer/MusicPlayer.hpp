//
//  MusicPlayer.hpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#ifndef MusicPlayer_hpp
#define MusicPlayer_hpp

#include <stdio.h>
#include "../Player.hpp"
#include <string>

//create properties
//getters and setters
//constructors (default, overloaded, copy)
//destructor
//methods
class MusicPlayer : public Player {
private:
    std::string musicFile;

protected:

public:
    //default constructor
    MusicPlayer();
    //overloaded constructor
    MusicPlayer(std::string musicFile);
    //copy constructor
    MusicPlayer(MusicPlayer const &obj);
    //destructor
    ~MusicPlayer();

    //setters
    void setMusicFile(std::string musicFile);

    //getters
    std::string getMusicFile();

    virtual std::string Can() override;
    virtual std::string ServiceName() override;
    virtual std::string ProviderProperty()override;
    virtual bool UseKeyboard()override;


};


#endif /* MusicPlayer_hpp */
