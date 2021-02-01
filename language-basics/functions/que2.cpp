#include<iostream>
using namespace std;
void fibo(int n){
    if(n==1){
        cout<<0;
    }
    else if(n==2){
        cout<<0<<" "<<1;
    }
    else{
        int a=0,b=1;
        int i=3;
        int fib;
        
        cout<<a<<" "<<b<<" ";
        while(i<=n){
            fib = a+b;
            cout<<fib<<" ";

            a = b;
            b = fib;
            
            i++;

        }
    }

}
int main(){
    int n;
    cin>>n;
    fibo(n);
    cout<<endl;

    return 0;
}