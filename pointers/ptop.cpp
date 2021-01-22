#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;
    cout<<"Address of a: "<<ptr<<endl;
    cout<<"Value of a: "<<*ptr<<endl;
    int **p = &ptr;
    cout<<"Address of ptr: "<<p<<endl;
    cout<<"Value of ptr variable(address of a): "<<*p<<endl;
    cout<<"Value of a: "<<**p<<endl;
    // Output will be something like this
    // Address of a: 0x7ffe217d2724
    // Value of a: 10
    // Address of ptr: 0x7ffe217d2728
    // Value of ptr variable(address of a): 0x7ffe217d2724
    // Value of a: 10
    return 0;
}