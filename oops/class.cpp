#include <iostream>
using namespace std;
// class declaration
class student {
  // access specifier
public:
  // data members
  string name;
  int age;
  bool gender;
};
void show(student a){
    cout<<a.name<<endl;
    cout<<a.age<<endl;
    if(a.gender){
        cout<<"Male"<<endl;
    }
    else{
        cout<<"Female"<<endl;
    }
    cout<<"_______________"<<endl;
}
int main() {
  // using class
  student a; // object or instance of the class
  a.name = "Tushar";
  a.age = 20;
  a.gender = 1;
  student b;
  b.name = "Rahul";
  b.age = 22;
  b.gender = 1;
  show(a);
  show(b);
}