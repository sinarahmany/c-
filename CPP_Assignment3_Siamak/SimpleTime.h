#ifndef SIMPLETIME_H
#define SIMPLETIME_H

class SimpleTime{
    private:
        int hour;                                   // -int hour
        int minute;                                 // -int minute
        int second;                                 // -int Second
        std::string zone;                           // -string Zone time zone

    public:
        SimpleTime();                               // +SimpleTime()
        SimpleTime(int,int,int, std::string);       // +Simpletime(int,int,int, string)
        SimpleTime(SimpleTime *);                    // +SimpleTime(SimpleTime*) or SimpleTime(SimpleTime&)
        ~SimpleTime();

        void setTime(int,int,int, std::string);     // +setTime(int,int,int, string):void

        void setHour(int);                          // +setHour(int):void
        int getHour();                              // +getHour():int
        void setMinute(int);                        // +setMinute(int):void
        int getMinute();                            // +getMinute():int
        void setSecond(int);                        // +setSecond(int):void
        int getSecond();                            // +getSecond():int
        void setZone(std::string);                  // +setZone(String):void
        std::string getZone();                      // +getZone():String

        void printCivilian();                       // +printCivilian():void
        void printMilitary();                       // +printMilitary():void
        void printZulu();                           // +printZulu():void

    private:
        bool checkTime(int, int, int);              // -checkTime(int, int, int):bool
        bool checkHour(int);                        // -checkHour(int):bool
        bool checkMinute(int);                      // -checkMinute(int):bool
        bool checkSecond(int);                      // -checkSecond(int):bool

    public:
        std::string strHour();                      // A function to create hour in 2 digit string format
        std::string strMinute();                    // A function to create minute in 2 digit string format
        std::string strSecond();                    // A function to create second in 2 digit string format
};
#endif // SIMPLETIME_H
