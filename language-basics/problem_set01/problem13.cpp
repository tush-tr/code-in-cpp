#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        if(i>=2){
            for(int j=2;j<=i;j++){
                cout<<j;
            }
        }
        cout<<endl;
    }
    return 0;
}