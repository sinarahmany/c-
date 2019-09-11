#include <iostream>
#include <time.h>
#include "timeclass.h"
#include <vector>

using namespace std;





int main() {

     int c;

//    c = getchar();
//
//    putchar(c);



    //mySuperTime<int,int,int> bday(1992,2,5);
    // mySuperTime<int,std::string,std::string> bday2(1992, "february", "fifth");

    timeclass now;
    try {
        time_t rawtime;
        struct tm * timeinfo;

        time ( &rawtime );
        timeinfo = localtime ( &rawtime );

        std::cout << timeinfo->tm_year+1900 << std::endl; // 2019-119 = 1900
        std::cout << now.printMonth(timeinfo->tm_mon) << std::endl; // 0 - Jan, 1 - Feb
        std::cout << now.printDay(timeinfo->tm_mday) << std::endl; // day of the month
//        std::cout << printDay(32) << std::endl; // day of the month

        std::cout << timeinfo->tm_hour << std::endl; // time hour
        std::cout << timeinfo->tm_min << std::endl; // time minute
        std::cout << timeinfo->tm_sec << std::endl; // time second
        std::cout << now.printWeekDay(timeinfo->tm_wday) << std::endl; // week day - monday tuesday
        std::cout << timeinfo->tm_yday << std::endl; // day of the year
    } catch (std::logic_error &ex) {
        std::cout << "ERROR : " << ex.what() << std::endl;
    }


}
