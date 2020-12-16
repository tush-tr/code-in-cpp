#include<iostream>
using namespace std;
int add(int a, int b){
    int s;
    s = a+b;
    return s;
}
int main(){
    int a,b;
    cin>>a>>b;
    int sum= add(a,b);
    cout<<sum<<endl;


    return 0;
}