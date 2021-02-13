#include<bits/stdc++.h>
#include <vector>
using namespace std;
void display(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    for(int i=2;i<11;i++){
        v.push_back(i);
    }
    display(v);
    cout<<endl;

    v.pop_back();
    display(v);

    
    
    
}