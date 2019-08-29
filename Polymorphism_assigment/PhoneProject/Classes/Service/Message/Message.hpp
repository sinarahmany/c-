//
//  Message.hpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#ifndef Message_hpp
#define Message_hpp
#include <string>
#include <stdio.h>
#include "../Service.hpp"


//create properties
//getters and setters
//constructors (default, overloaded, copy)
//destructor
//methods
class Message : public Service{

private:

protected:

public:
    virtual std::string Can() override;
    virtual std::string ServiceName() override;
    virtual std::string ProviderProperty()override;
    virtual bool UseKeyboard()override;
    bool Send();
    bool Receive();

};
#endif /* Message_hpp */
