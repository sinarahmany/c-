#ifndef TRANSACTION_H
#define TRANSACTION_H

class Transaction{
    private:
        int amount;                                                     // -int amount
        std::string acountType;                                         // -string acountType
        SimpleDate *date;                                               // -SimpleDate *date
        SimpleTime *time;                                               // -SimpleTime time

    public:
        Transaction();                                                  // +Transaction()
        Transaction(int, std::string, SimpleTime *, SimpleDate *);          // +Transaction(int, string, SimpleTime, SimpleDate)
        Transaction(const Transaction *);                               // +Transaction(Transaction*) or Transaction(Transaction &)
        ~Transaction();                                                 // +~Transaction

        void setTransaction(int, std::string, SimpleTime *, SimpleDate *);  // +setTransaction(int, string, SimpleTime, SimpleDate):void

        void setAmount(int);                                            // +setAmount(int):void
        int getAmount();                                                // +getAmount():int
        void setAccountType(std::string);                               // +setAccountType(string):void
        std::string getAccountType();                                   // +getAccountType():String

        void setTime(SimpleTime *);                                     // +setTime(SimpleTime *):void
        SimpleTime getTime();                                          // +getTime():SimpleTime:string
        void setTime(int, int, int, std::string);                       // +setTime(int, int, int, string):void

        void setDate(SimpleDate *);                                     // +setDate(SimpleDate *):void
        SimpleDate getDate();                                          // +getDate():SimpleDate
        void setDate (int, int, int, std::string);                      // +setDate (int, int, int, string):void

        void print();                                                   // +print():void

    private:
        bool checkAmount(int);                                          // -checkAmount(int):bool
        bool checkAccountType(std::string);                             // -checkAccountType(string):bool
};
#endif // TRANSACTION_H
