#include <iostream>
#include <vector>


using namespace std;


template<typename T>
void printvector(std::vector<T> &vec){
    if (vec.empty()) cout<<"it`s empty " <<endl;
    for(T item : vec) cout<< item<<"," ;
    cout<<""<<endl;
}
int main()
{
    //create a vector
    vector <string> vectring{"a","b","c"};
    printvector(vectring);
    //insert
    vectring.insert(vectring.begin()+1,"v");
    printvector(vectring);
    //erase
    vectring.erase(vectring.begin());
    printvector(vectring);
    cout<<"\n\n";
    vector<pair<string,double>> myMarks{
        {"sia",99.99},
        {"sina",0.0},
        {"Taylor",-100.5}
    };
    for(auto item : myMarks){
        if(item.second<0){cout<< item.first<<"->"<<"minus "<<(item.second*(-1))<<endl ;}
        else{
            cout<< item.first<<"->"<<item.second<<endl ;
        }
    }
    cout<<""<<endl;
}
