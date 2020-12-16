#include<iostream>
using namespace std;
int fact(int n){
    int fac =1;
    for(int i=2;i<=n;i++){
        fac *=i;
    }
    return fac;
}
int ncr(int n, int r){
    int bot = n-r;
    int bottom = fact(bot) * fact(r);
    int result = fact(n)/bottom;
    return result;

}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}