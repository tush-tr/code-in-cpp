// Write an expression for calculating Distance

// parameters are

// u -- initial velocity

// v -- final velocity

// a -- acceleration

#include <iostream>
using namespace std; 

int main(){
    int v,u,a;
    cout<<"Enter final velocity: ";
    cin>>v;
    cout<<"Enter initial velocity: ";
    cin>>u;
    cout<<"Enter acceleration: ";
    cin>>a;
    int distance;
    distance = (v*v - u*u)/(2*a);
    cout<<distance;

}
