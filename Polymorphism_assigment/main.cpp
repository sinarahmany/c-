#include <iostream>
#include "PhoneProject/Classes/all_headers.hpp"
#include <vector>

int main() {

    ApplicationCenter applicationCenter;
    Calculator calculator;
    Calendar calendar;
    Camera camera;
    PictureCamera pictureCamera;
    VideoCamera videoCamera;
    EmailClient emailClient;
    Gmail gmail;
    Message message;
    Phone phone;
    Player player;
    MusicPlayer musicPlayer;
    VideoPlayer videoPlayer;
    WebBrowser webBrowser;

    //dynamic binding
    Service * services[14] {
        new ApplicationCenter,
        new Calculator,
        new Calendar,
        new Camera,
        new PictureCamera,
        new VideoCamera,
        new EmailClient,
        new Gmail,
        new Message,
        new Phone,
        new Player,
        new MusicPlayer,
        new VideoPlayer,
        new WebBrowser
        };

    for(auto Service : services)
        std::cout << Service->ServiceName() << std::endl;


    std::cout << "\n\nphone volume is : " << phone.SetVoiceVolume(9)<<std::endl;
    std::cout << "phone volume is : " << phone.SetVoiceVolume(-5)<<std::endl;
    std::cout << "phone volume is : " << phone.SetVoiceVolume(6)<<std::endl;

}
