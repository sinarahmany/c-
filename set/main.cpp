#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;
template<typename T>
void printSet(const std::set<T> &theSet){
    for(auto &element : theSet){
        cout<<element << " ";
    }
    cout<<"\n";
}
template<typename T>
void printUnorderedSet(const std::unordered_set<T> &theSet){
    for(auto &element : theSet){
        cout<<element << " ";
    }
    cout<<"\n";
}
int main()
{
    //numbers {1,2,3,4,4,5,5,5,5}; has the same cout
    //set ignores duplicate and sort them
    std::set<int> numbers {1,2,3,4,5,9,14,10,7};
    std::unordered_set<int> numbers2 {1,2,3,4,5,9,14,10,7};
    printSet(numbers);
    printUnorderedSet(numbers2);

}
