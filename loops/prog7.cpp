#include <iostream>
using namespace std; 

int main(){
    int n;
    cin>>n;
    int digit;
    while(n>0){
        digit = n%10;
        n = n/10;
        cout<<digit<<" ";
    }
    cout<<endl;
}