#include <iostream>
#include <set>
using namespace std;
template<typename T>
void printSet(const std::set<T> &theSet){
    for(auto &element : theSet){
        cout<<element << " ";
    }
    cout<<"\n";
}
int main()
{
    //numbers {1,2,3,4,4,5,5,5,5}; has the same cout
    //set ignores duplicate
    std::set<int> numbers {1,2,3,4,5};
    printSet(numbers);
}
