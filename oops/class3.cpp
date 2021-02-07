#include <iostream>
using namespace std;
class student {
  string name;

public:
  int age;
  void setname(string s){
      name = s;
  }
  string getname() { return name; }
};
int main() {
    student a;
    a.setname("Tushar");
    a.age = 20;
    cout<<a.getname()<<endl;
    cout<<a.age<<endl;
}