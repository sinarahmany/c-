#include "Functions.h"

    // A function to cout using 3 parameters, 1st:String, 2nd:ColorCode, 3rd:Times to print the string
    void strColor(std::string strText, int intColor, int intQty){
        HANDLE  hConsole;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);                 // get access to the Console handler
        SetConsoleTextAttribute(hConsole, static_cast<int>(intColor%15==0?15:intColor%15)); // set console handler color based on intColor from 1 to 15
        for (int i=0; i<intQty; i++) std::cout<<strText;            // A loop to reprint the character for intQty times
        SetConsoleTextAttribute(hConsole, 15);                      // Set back console color
    return;
}
