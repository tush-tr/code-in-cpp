#include<iostream>
using namespace std;
int main(){
    // arithmetic pointer
    int a = 10;
    int *aptr = &a;
    cout<<"Address of a variable: "<<aptr<<endl;
    //increasing pointer by one
    aptr++;
    cout<<"Address of next integer: "<<aptr<<endl;
    // address with increased by 4 because size of integer data type is 4.

    return 0;
}