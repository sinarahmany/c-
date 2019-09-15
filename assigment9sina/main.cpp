#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
#include <stdio.h>
#include <time.h>
#include "Date.h"


std::string printMonth(int month){

    std::string months[12] {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    return months[month];
}


std::string printWeekDay(int weekDay){

    std::string weekdays[7] {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    return weekdays[weekDay];

}

std::string printDay(int day){

    if(day < 1 || day >31){
        throw std::logic_error("something wrong with the day");
    }

    std::string days[31] = {
        "first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth",
        "eleventh", "twelfth", "thirteenth", "fourteenth", "fifteenth", "sixteenth", "seventeenth", "eighteenth", "nineteenth", "twentieth",
        "twenty-first", "twenty-second", "twenty-third", "twenty-fourth", "twenty-fifth", "twenty-sixth", "twenty-seventh", "twenty-eighth", "twenty-ninth", "thirtieth",
        "thirty-first"
    };

    return days[day-1];

}

int main() {

    try {
        time_t rawtime;
        struct tm * timeinfo;

        time ( &rawtime );
        timeinfo = localtime ( &rawtime );

        std::cout << timeinfo->tm_year+1900 << std::endl;
        std::cout << printMonth(timeinfo->tm_mon) << std::endl;
        std::cout << printDay(timeinfo->tm_mday) << std::endl;

        std::cout << timeinfo->tm_hour << std::endl;
        std::cout << timeinfo->tm_min << std::endl;
        std::cout << timeinfo->tm_sec << std::endl;
        std::cout << printWeekDay(timeinfo->tm_wday) << std::endl;
        std::cout << timeinfo->tm_yday << std::endl;

        //typen in your Birthdate here!!!

        Date date(12,5,1999);
        date.whatDateIsIt();
        date.calculateAge();


    } catch (std::logic_error &ex) {
        std::cout << "ERROR : " << ex.what() << std::endl;
    }

}

