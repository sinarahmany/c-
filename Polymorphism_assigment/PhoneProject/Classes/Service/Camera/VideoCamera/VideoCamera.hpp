//
//  VideoCamera.hpp
//  PhoneProject
//
//  Created by Saygin Guven on 2019-08-22.
//

#ifndef VideoCamera_hpp
#define VideoCamera_hpp

#include <stdio.h>
#include "../Camera.hpp"

//create properties
//getters and setters
//constructors (default, overloaded, copy)
//destructor
//methods
class VideoCamera : public Camera{

private:
    bool isRecording;

protected:

public:
    bool Record();
    bool StopRecording();
    virtual std::string ServiceName() override;
    virtual std::string Can() override;
    virtual std::string ProviderProperty()override;
    virtual bool UseKeyboard()override;
};

#endif /* VideoCamera_hpp */
