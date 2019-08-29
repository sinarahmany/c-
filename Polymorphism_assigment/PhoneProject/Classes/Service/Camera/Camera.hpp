//
//  Camera.hpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#ifndef Camera_hpp
#define Camera_hpp
#include <iostream>
#include <stdio.h>
#include "../Service.hpp"
#include <string>

class Camera : public Service{

private:

protected:

public:
    virtual std::string Can() override;
    virtual std::string ServiceName()override;
    virtual std::string ProviderProperty()override;
    virtual bool UseKeyboard()override;
    bool OpenCamera();

};

#endif /* Camera_hpp */
