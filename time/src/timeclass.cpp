#include "timeclass.h"

timeclass::timeclass(){

}
timeclass::timeclass(int year,int month ,int day){

}

std::string timeclass::printMonth(int month){

    std::string months[12] {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    return months[month];
}


std::string timeclass::printWeekDay(int weekDay){

    std::string weekdays[7] {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    return weekdays[weekDay];

}

std::string timeclass::printDay(int day){

    if(day < 1 || day >31){
        throw std::logic_error("hmmmm thats a wrong day");
    }

    std::string days[31] = {
        "first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth",
        "eleventh", "twelfth", "thirteenth", "fourteenth", "fifteenth", "sixteenth", "seventeenth", "eighteenth", "nineteenth", "twentieth",
        "twenty-first", "twenty-second", "twenty-third", "twenty-fourth", "twenty-fifth", "twenty-sixth", "twenty-seventh", "twenty-eighth", "twenty-ninth", "thirtieth",
        "thirty-first"
    };

    return days[day-1];

}
