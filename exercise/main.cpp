#include <iostream>
#include <vector>

using namespace std;


template<typename T>
void printvector(std::vector<T> &vec){
    if (vec.empty()) cout<<"it`s empty " <<endl;
    for(T a : vec) cout<< a <<endl;
}
int main()
{
    vector <string> vectring{"a","b"};
    printvector(vectring);
}
