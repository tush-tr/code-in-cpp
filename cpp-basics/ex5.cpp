// Write an Expression for calculating Simple Interest

// parameters are



// P -- principle amount

// T -- time

// R -- rate of interest



// just write the formula for simple interest at line

// SI=
#include <iostream>
using namespace std; 

int main(){
    int P, T, R;
    cin>>P>>T>>R;
    int SI;
    SI = (P*T*R)/100;
    cout<<SI<<endl;

}