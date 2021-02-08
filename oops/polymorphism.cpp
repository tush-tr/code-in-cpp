#include <iostream>
using namespace std;
class functionoverloading {
public:
  void fun() { cout << "I'm a function with no arguments" << endl; }
  void fun(int x) { cout << "I'm a function with int argument" << endl; }
  void fun(double x) { cout << "I am a function with double argument" << endl; }
};

// operator overloading
class complex {
private:
  int real, imaginary;

public:
  complex(int r = 0, int i = 0) {
    real = r;
    imaginary = i;
  }
  complex operator+(complex const &obj) {
    complex res;
    res.imaginary = imaginary + obj.imaginary;
    res.real = real + obj.real;
    return res;
  }
  void display() { cout << real << endl << imaginary << endl; }
};

// Functions overwriting
class base {
public:
    virtual void print(){
        cout<<"This is print function of base class"<<endl;
    }
    void display(){
        cout<<"This is display function of base class"<<endl;
    }
};

class derived : public base{
    public:
    void print(){
        cout<<"This is print function of derived class"<<endl;
    }
    void display(){
        cout<<"This is display function of derived class"<<endl;
    }
};

int main(){
  functionoverloading obj;
  obj.fun();
  obj.fun(4);
  obj.fun(6.5);

  // Operator overloading
  complex c1(12, 7);
  complex c2(6, 7);
  complex c3 = c1 + c2;
  c3.display();


  // function overwriting
  base *baseptr;
  derived d;
  baseptr = &d;
  baseptr ->print();
  baseptr ->display();

}