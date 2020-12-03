// 11111
// 2222
// 333
// 44
// 5

#include<iostream>
using namespace std;
int main(){
    int n=5;
    int count= 1;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<count;
        }
        count++;
        cout<<endl;
    }
    return 0;
}