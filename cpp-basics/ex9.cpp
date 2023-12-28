// Netsalary = basic salary + basic salary * percentage of allowances - basic salary * percentage of deductions.
#include <iostream>
using namespace std; 

int main(){
    int bs,pa,pd;
    cout<<"Enter basic salary: ";
    cin>>bs;
    cout<<"Enter percentage of allowances: ";
    cin>>pa;
    cout<<"Enter percentage of deductions: ";
    cin>>pd;
    int ns = bs +(bs*pa/100)-(bs*pd/100);
    cout<<"Net salary = "<<ns<<endl;

}