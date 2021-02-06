#include <iostream>
using namespace std;
int countsetbit(int n){
    int count = 0;
    while(n>0){
        count++;
        n = n & (n-1);
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int bits = countsetbit(n);
    if(bits==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;

}