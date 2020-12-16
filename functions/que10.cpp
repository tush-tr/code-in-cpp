#include<iostream>
using namespace std;
bool vote(int age){
    if(age>=18){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int age;
    cin>>age;
    if(vote(age)==true){
        cout<<"Yes You can vote";
    }
    else{
        cout<<"You can't vote";
    }
    cout<<endl;
    return 0;
}