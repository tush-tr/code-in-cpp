#include<iostream>
using namespace std;
int main(){
    // i = 2......(n-1)
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not Prime";
            break;
        }
    }
    if(i==n){
        cout<<"Prime"<<endl;
    }
    return 0;
}