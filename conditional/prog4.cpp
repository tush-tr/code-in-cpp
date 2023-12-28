/*
Write condition to check is given time is Working hours or not

condition

if hour is from 9 to 18 its working hours

otherwise leisure
output

cout<<"working"

cout<<"leisure"



Note: for HELP , check "exercise.h" it has solution in form of comments.
*/


#include <iostream>
using namespace std; 

int main(){
    int workingHours;
    cout<<"Enter working hour: ";
    cin>>workingHours;
    if(workingHours>=9 && workingHours<=18){
        cout<<"It's working hours"<<endl;
    }
    else{
        cout<<"It's not working hours";
    }

}