// PALINDROME -- reverse of a number is equal to a number
#include <iostream>
using namespace std; 
int reverseNum(int n){
    int digit;
    int rev=0;
    while(n>0){
        digit = n%10;
        rev = rev*10 + digit;
        n = n/10;
    }
    return rev;
}
int main(){
    int n;
    cin>>n;
    int rev = reverseNum(n);
    if(rev==n){
        cout<<"palindrome"<<endl;
    }else{
        cout<<"Not palindrome"<<endl;
    }


}