/*
Write nested conditions to check average marks and display grades

*this coding exercise is based on previous video*

Calculate Average (Avg)

if Avg >=60 print Grade 'A'

if 35<=Avg<60 print Grade 'B'

if Avg<35 print Grade 'C'
*/
#include <iostream>
using namespace std; 

int main(){
    int m1,m2,m3;
    float Total,Avg;
    Total = m1+m2+m3;
    Avg = Total/3;
    //write nested if statements to print grades
    if(Avg>=60){
        cout<<"A";
    }else if(Avg<60 && Avg>=35){
        cout<<"B";
    }else if(Avg<35){
        cout<<"C";
    }

}