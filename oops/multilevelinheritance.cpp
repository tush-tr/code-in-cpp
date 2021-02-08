#include <iostream>
using namespace std;
class A {
public:
  void funcA() { cout << "Class A" << endl; }
};
class B : public A{
    public:
    void funcB(){
        cout<<"Class B"<<endl;
    }
};
class C : public B{
};
int main() {
    C obc;
    obc.funcA();
    obc.funcB();
}