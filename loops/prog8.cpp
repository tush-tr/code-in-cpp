#include <iostream>
using namespace std; 
// ARMSTRONG NUMBER - if the sum of cubes of digits of a number is equal to a number
int main(){
    int n;
    cin>>n;
    int m = n;
    int r;
    int sum=0;
    while(n>0){
        r = n%10;
        n = n/10;
        sum+=(r*r*r);
    }
    if(sum==m){
        cout<<"Armstrong"<<endl;
    }else{
        cout<<"Not Armstrong"<<endl;
    }

}