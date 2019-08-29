//
//  Phone.hpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#ifndef Phone_hpp
#define Phone_hpp

#include <stdio.h>
#include "../Service.hpp"
#include <string>

//create properties
//getters and setters
//constructors (default, overloaded, copy)
//destructor
//methods
class Phone : public Service{

private:

protected:

public:
    virtual std::string Can() override;
    virtual std::string ServiceName() override;
    virtual std::string ProviderProperty()override;
    virtual bool UseKeyboard()override;
    std::string PlaceCall();
    std::string ReceiveCall();
    int SetVoiceVolume(int numb);
    std::string DeclineCall();
    ~Phone(){};

};

#endif /* Phone_hpp */
