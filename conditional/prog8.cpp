#include <iostream>
using namespace std; 

int main(){
    float a,b,c;
    float d,r1,r2;
     //calculate d
    d = pow(b,2) - 4*a*c;
    // print nature of roots using nested if
    if(d==0){
        r1=-b/(2*a);
        cout<<"real and equal "<<r1;
    }else if(d>0){
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        cout<<"real and unequal "<<r1<<" "<<r2;
    }else{
        cout<<"imaginary";
    }

}