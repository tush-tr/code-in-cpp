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
  // we can write function inside of the class
  void show() {
    cout << "Name: " << name << endl
         << "Age: " << age << endl
         << "Gender: " << gender << endl;
  }
};
int main() {
  student arr[3];
  for (int i = 0; i < 3; i++) {
    cout << "Name  :  ";
    cin >> arr[i].name;
    cout << "Age  :  ";
    cin >> arr[i].age;
    cout << "Gender  :  ";
    cin >> arr[i].gender;
  }
  for(int i=0;i<3;i++){
      arr[i].show();
  }
}