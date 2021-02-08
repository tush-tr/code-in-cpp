#include <iostream>
using namespace std;
class A{
    public:
    void Afunc(){
        cout<<"Inherited from A"<<endl;
    }
};
class B{
    public:
    void Bfunc(){
        cout<<"Inherited from B"<<endl;
    }
};
class C : public A, public B{
};
int main(){
    C obc;
    obc.Afunc();
    obc.Bfunc();
}