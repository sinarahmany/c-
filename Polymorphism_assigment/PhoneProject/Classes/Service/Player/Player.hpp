//
//  Player.hpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include "../Service.hpp"

//create properties
//getters and setters
//constructors (default, overloaded, copy)
//destructor
//methods
class Player : public Service{

private:
    bool isPlaying;//default is false in xcode

protected:

public:
    virtual std::string Can() override;
    virtual std::string ServiceName() override;
    virtual std::string ProviderProperty()override;
    virtual bool UseKeyboard()override;
    bool Play();
    bool StopPlaying();


};

#endif /* Player_hpp */
