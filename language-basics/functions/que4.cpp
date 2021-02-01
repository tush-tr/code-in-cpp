// formula of nCr = n!/(n-r)! x r!
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
    int n,r;
    cin>>n>>r;
    cout<<"nCr is: "<<ncr(n,r)<<endl;
    return 0;
}