#include<iostream>
using namespace std;
// Base Class
class A{
    public:
    void func(){
        cout<<"Inherited"<<endl;
    }
};
// Derived class
class B : public A{  
};
int main(){
    B b;
    b.func();

}