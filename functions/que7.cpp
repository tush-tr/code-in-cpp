#include<iostream>
using namespace std;
void checkalpha(char a){
    int n = int(a);
    if(n>=65 && n<=90 || n>=97 && n<=122){
        cout<<"Character is an Alphabet";
    }
    else{
        cout<<"Not an Alphabet";
    }
}
int main(){
    char a;
    cin>>a;
    checkalpha(a);
    cout<<endl;
    return 0;
}