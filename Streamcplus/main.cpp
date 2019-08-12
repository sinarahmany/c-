#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    std::ifstream Readobj;
    Readobj.open("main.txt");
    std::string line;
    Readobj >> line;
    std::cout << line ;
    return 0;
}
