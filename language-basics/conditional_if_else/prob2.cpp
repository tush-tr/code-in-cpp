#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<"First number is greater";
    }
    else if(b>a){
        cout<<"Second number is greater";
    }
    else{
        cout<<"Numbers are equal";
    }
    cout<<endl;
    return 0;
}