#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <string>
#include <iostream>

class Transaction
{

    public:
        Transaction();
        Transaction(int, std::string, SimpleTime *, SimpleDate *);
        Transaction(const Transaction *);
        ~Transaction();

        void setTransaction(int, std::string, SimpleTime *, SimpleDate *);

        void setAmount(int);
        int getAmount();
        void setAccountType(std::string);
        std::string getAccountType();

        void setTime(SimpleTime *);
        SimpleTime getTime();
        void setTime(int, int, int, std::string);

        void setDate(SimpleDate *);
        SimpleDate getDate();
        void setDate (int, int, int, std::string);

        void print();

    private:
        int amount;
        std::string acountType;
        SimpleDate *date;
        SimpleTime *time;
        bool checkAmount(int);
        bool checkAccountType(std::string);

};

#endif // TRANSACTION_H
