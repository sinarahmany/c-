#ifndef SIMPLEDATE_H
#define SIMPLEDATE_H

class SimpleDate{
    private:
        int day;                                    // -int day
        int month;                                  // -int month
        int year;                                   // -int year
        std::string dayofweek;                      // -string dayofweek

    public:
        SimpleDate();                               // +SimpleDate()
        SimpleDate(int, int, int, std::string);     // +SimpleDate(int,int,int, string)
        SimpleDate(const SimpleDate *);             // +SimpleDate(SimpleDate*)  or +SimpleDate(SimpleDate&)
        ~SimpleDate();

        void setDate(int, int, int, std::string);   // +setDate(int,int,int, string):void

        int getDay();                               // +setDay(int):void
        void setDay(int);                           // +getMonth():int
        int getMonth();                             // +setYear(int):void
        void setMonth(int);                         // +getDay():int
        int getYear();                              // +setMonth(int):void
        void setYear(int);                          // +getYear():int
        std::string getDOW();                       // +setDOW(String):void
        void setDOW(std::string);                   // +getDOW():String

        void print();                               // +print():void

    private:
        bool checkDate(int, int, int);              // -checkDate(int, int, int):bool
        bool checkDay(int);                         // -checkDay(int):bool
        bool checkMonth(int);                       // -checkMonth(int):bool
        bool checkYear(int);                        // -checkYear(int):bool

    public:
        std::string strMonth();                     // + A function to convert month to 2 digit stirng
        std::string strDay();                       // + A function to convert day to 2 digit stirng
        std::string strYear();                      // + A function to convert year to 2 digit stirng
};
#endif // SIMPLEDATE_H
