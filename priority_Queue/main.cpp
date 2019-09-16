#include <iostream>
#include <queue>
using namespace std;

int main()
{
    std::priority_queue<int> numbers;
    numbers.push(1);
    numbers.push(134);
    numbers.push(1200);
    numbers.push(200);
    numbers.push(169);

    while (!numbers.empty()){
        cout<<"\nnumbers.top() "<<numbers.top();
        numbers.pop();
    }
    cout<<"\n---------------------------"<<endl;

   std::priority_queue<std::string> names;
   names.push("sina");
   names.push("taylor");
   names.push("martin");
   names.push("selena");
   names.push("angelica");

   while(!names.empty()){
        cout<<"\nnames.top() "<<names.top();
        names.pop();
   }
}
