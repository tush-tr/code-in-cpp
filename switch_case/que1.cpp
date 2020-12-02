#include<iostream>
using namespace std;
int main(){
    int first_value,second_value;
    char op;
    cout<<"Enter the first number: ";
    cin>>first_value;
    cout<<endl<<"Enter the second number: ";
    cin>>second_value;
    
    cout<<"Enter the operator: ";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<first_value+second_value;
        break;
    case '-':cout<<first_value-second_value;break;
    case '*':cout<<first_value*second_value;break;
    case '/':cout<<first_value/second_value;break;
    case '%':cout<<first_value%second_value;break;
    default:cout<<"Please Enter the correct operator within +,-,*,/,%";
        break;
    }
    cout<<endl;

    
    return 0;
}