#include<iostream>
using namespace std;
int main(){
    char button;
    cin>>button;
    // if (button=='a')
    // {
    //     cout<<"hello";
    // }
    // else if(button=='b'){
    //     cout<<"Namaste";
    // }
    // else if(button=='c'){
    //     cout<<"Hey";
    // }
    switch (button)
    {
    case 'a':
        cout<<"Hello";
        break;
    case 'b':
        cout<<"Namaste";
        break;
    case 'c':
        cout<<"Hey";
        break;
    default:
        break;
    }
    return 0;
}