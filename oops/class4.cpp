#include <iostream>
#include <ostream>
using namespace std;
// class declaration
class student {
public: // access specifier
  // data members
  string name;
  int age;
  bool gender;
  // default constructor
  student() { cout << "This is default constructor" << endl; }
  // parameterized constructor
  student(string s, int a, bool g) {
      cout<<"Parameterized constructor"<<endl;
    name = s;
    age = a;
    gender = g;
  }

    // defining copy constructor
  student(student &a){
      cout<<"Copy constructor"<<endl;
      name = a.name;
      age = a.age;
      gender = a.gender;
  }
  
  // destructor
  ~student(){
      cout<<"Destructor called"<<endl;
  }

    bool operator == (student &a){
        if(name==a.name && age == a.age && gender == a.gender){
            return true;
        }
        return false;
        
    }

};
int main() {
  student a("Tushar", 20, 1);
  cout << a.name << endl;
  cout << a.age << endl;
  cout << a.gender << endl;
  student b; // call default constructor automaticallly

  student c = a; // copy constructor

  if(c==a){
      cout<<"Same"<<endl;
  }
  else{
      cout<<"Not same"<<endl;
  }
}