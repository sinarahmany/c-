#include <iostream>

using namespace std;

int main()
{
    //All 3 has the same output
    std::cout << "Hello world!" << std::endl;
    std::cout << "Hello world! \n" ;
    std::cout << "Hello world! \x0A" ;
    return 0;
}
