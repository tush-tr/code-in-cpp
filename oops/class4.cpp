#include <iostream>
#include <ostream>
using namespace std;
// class declaration
class student {
  // access specifier
public:
  // data members
  string name;
  int age;
  bool gender;
    // constructor
  student(string s,int a, bool g){
      name = s;
      age = a;
      gender = g;
  }
  // we can write function inside of the class
  void show() {
    cout << "Name: " << name << endl
         << "Age: " << age << endl
         << "Gender: " << gender << endl;
  }
};
int main(){
    student a("Tushar",20,1);
    cout<<a.name<<endl;
    cout<<a.age<<endl;
    cout<<a.gender<<endl;
}