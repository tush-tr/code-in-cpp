#include <iostream>
using namespace std; 

enum days {mon,tue,wed,thu,fri,sat,sun};
// #define mon 0
// const int mon=0
int main(){
    days d;
    d = tue;
    if(d==0){
        cout<<"It's monday"<<endl;
    }else{
        cout<<"It's not monday"<<endl;
    }

}