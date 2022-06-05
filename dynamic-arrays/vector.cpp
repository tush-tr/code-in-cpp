#include <bits/stdc++.h>
// #include<vector>
using namespace std; 

int main(){
    // vector <datatype> name(size,value)
    vector<int> v;
    // adding elements to our vector
    v.push_back(1);
    v.push_back(2);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    // Iterator
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

    v.pop_back(); // remove/pop element end of the vector

    // using auto
    for(auto element:v){
        cout<<element<<endl;
    }

    vector<int> v1(3,50);
    for(auto element:v1){
        cout<<element<<endl;
    }

    // swapping between vectors
    // swap(v,v1); // or we can use
    v.swap(v1);
    cout<<"After Swapping v and v1"<<endl;
    cout<<"______v______"<<endl;
    for(auto element:v){
        cout<<element<<endl;
    }
    cout<<"________v1________"<<endl;
    for(auto element:v1){
        cout<<element<<endl;
    }

    cout<<"_____SORT v______"<<endl;
    sort(v.begin(),v.end());
    for(auto el:v){
        cout<<el<<endl;
    }

}