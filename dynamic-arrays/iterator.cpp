#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    for(int i=1;i<=10;i++){
        v.push_back(i);
    }
    vector<int>::iterator i;
    for(i=v.begin();i!=v.end();i++){
        cout<<*i<<endl;
    }

    cout<<"_________________________________"<<endl;
    // For each loop and auto keyword
    for(auto element:v){
        cout<<element<<endl;
    }
}