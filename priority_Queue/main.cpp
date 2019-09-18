#include <iostream>
#include <queue>
#include <array>
using namespace std;


class Student{
    friend std::ostream &operator <<(std::ostream & os ,const Student & obj) {
        os<<obj.name << " : " <<obj.age;
        return os;
    }
    int age;
    std::string name;

    public :
    Student(){
       age=1;
       name = "unknown";
    }
    Student(int ageVal, std::string nameVal){
        age = ageVal;
        name =nameVal;
    }

    bool operator<(const Student &obj)const{
        return(this->age <obj.age);
    }
    bool operator == (const Student &obj) const{
        return (this->age  == obj.age && this->name == obj.name);
    }

};













int main()
{



    //it`s messy here cause \ for this one i have to add another \ like this \\ cause the compiler ignores the first one
    cout<<" _____      _            _ _               ____                                  "<<endl;
    cout<<"|  __ \\    (_)          (_) |             / __ \\                               "<<endl;
    cout<<"| |__) | __ _  ___  _ __ _| |_ _   _     | |  | |_   _  ___ _   _  ___           "<<endl;
    cout<<"|  ___/ '__| |/ _ \\| '__| | __| | | |    | |  | | | | |/ _ \\ | | |/ _ \\       "<<endl;
    cout<<"| |   | |  | | (_)   | |  | | |_| |_|    | |__| | |_| |  __/ |_| |  __/          "<<endl;
    cout<<"|_|   |_|  |_|\\___/|_|  |_|\\__|\\__, |     \\___\\_\\__,_|\\___|\\__,_|\\___|  "<<endl;
    cout<<"                               __/ |                                             "<<endl;
    cout<<"                              |___/                                              "<<endl;




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
   names.push("Sina");
   names.push("Taylor");
   names.push("Martin");
   names.push("Selena");
   names.push("Angelica");

   while(!names.empty()){
        cout<<"names.top() "<<names.top()<<endl;
        names.pop();
   }



   cout<<"\n---------------------------"<<endl;

   Student s1{22,"john"};
   Student s2{44,"Old john"};
   Student s3{2,"Young john"};

   std::priority_queue <Student> students;

   students.push(s1);
   students.push(s2);
   students.push(s3);

   students.emplace(Student(23,"johny"));
   //push and emplace are the same

   while(!students.empty()){
        cout<<"students.top() "<<students.top()<<endl;
        students.pop();
   }

   cout<<"\n---------------------------"<<endl;

   int a[10];

   std::array<int,10> stlArr {2,3,5,7,11,13,17,19,23,29};

   cout<<stlArr[0] <<endl;
   cout<<stlArr.at(0) <<endl;
   cout<<stlArr.size() <<endl;
   cout<<stlArr.max_size() <<endl;
   cout<<stlArr.front() <<endl;

   cout<< "[ ";
   for(auto it =stlArr.rbegin(); it < stlArr.rend();it++){
        std::cout<< *it << " ";
   }
   std::cout<< " ]" <<std::endl;


}
