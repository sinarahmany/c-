//
//  Service.hpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#ifndef Service_hpp
#define Service_hpp

#include <stdio.h>
#include <string>
#include <iostream>

//create properties
//getters and setters
//constructors (default, overloaded, copy)
//destructor
//methods
class Service{

public:
    virtual std::string ServiceName() = 0 ;
    virtual std::string ProviderProperty() = 0;
    virtual bool UseKeyboard() = 0;
    virtual std::string Can() = 0;
    virtual ~Service(){};
private:


};




#endif /* Service_hpp */
