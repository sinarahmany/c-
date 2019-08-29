//
//  PictureCamera.hpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#ifndef PictureCamera_hpp
#define PictureCamera_hpp

#include <stdio.h>
#include "../Camera.hpp"

//create properties
//getters and setters
//constructors (default, overloaded, copy)
//destructor
//methods
class PictureCamera : public Camera{

private:

protected:

public:
    virtual std::string ServiceName() override;
    virtual std::string Can() override;
    virtual std::string ProviderProperty()override;
    virtual bool UseKeyboard()override;
    bool TakePicture();

};


#endif /* PictureCamera_hpp */
