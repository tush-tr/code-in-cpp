#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    return n + sum(n-1);
}
int main(){
    cout<<sum(4)<<endl;
}