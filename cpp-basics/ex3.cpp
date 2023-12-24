// Finding roots of a Quadratic Equation
// Write an expression for finding a positive root of Quadratic equation

// write only one positive formula at line

// root1=


#include <iostream>
#include<math.h>
using namespace std; 

int main(){
    int a=1;
    int b=-6;
    int c=9;
    float root1;
    root1 = (-b + sqrt(b*b -4*a*c))/(2*a);
    cout<<root1<<endl;

}