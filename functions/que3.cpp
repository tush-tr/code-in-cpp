#include<iostream>
using namespace std;
int fact(int n){
    int fac =1;
    for(int i=2;i<=n;i++){
        fac *=i;
    }
    return fac;
}
int main(){
    int n;
    cin>>n;
    cout<<"factorial of the number is: "<<fact(n)<<endl;

    return 0;
}