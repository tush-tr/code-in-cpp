#include<bits/stdc++.h>
using namespace std;
void display(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
vector<int> add(vector<int>v){
    for(int i=1;i<=10;i++){
        v.push_back(i);
    }
    return v;
}
int main(){
    vector<int> v;
    v = add(v);
    vector<int> v1;
    v1 = add(v1);
    v1.push_back(11);
    v1.push_back(12);
    
    cout<<"Before swaping"<<endl;
    display(v);
    display(v1);

    swap(v,v1);
    cout<<"After Swaping"<<endl;

    display(v);
    display(v1);

/*    Before swaping
1 2 3 4 5 6 7 8 9 10 
1 2 3 4 5 6 7 8 9 10 11 12 
After Swaping
1 2 3 4 5 6 7 8 9 10 11 12 
1 2 3 4 5 6 7 8 9 10 */


    // TODO: Sorting

    sort(v.begin(),v.end());
    display(v);
    


}