#include<iostream>
using namespace std;
// Method 1 
int sum1(int n){
    int up = n+1;
    up = n*up;
    int s = up/2;
    return s;
}
// Method 2 using for loop
int sum2(int n){
    int sum =0;
    for(int i=1;i<=n;i++){
        sum +=i;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<sum1(n)<<endl;
    // cout<<sum2(n)<<endl;

    return 0;
}