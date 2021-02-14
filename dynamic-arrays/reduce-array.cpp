#include<bits/stdc++.h>
#include <climits>
#include <utility>
using namespace std;
void display(int arr[],int ln){
    for(int i=0;i<ln;i++){
        cout<<arr[i]<<" ";
    }
}
bool myCompare(pair<int,int>p1,pair<int,int>p2){
    return p1.first<p2.first;
}
int main()
{
    int arr[] = {10,16,7,14,5,3,2,9};
    vector<pair<int,int>> n;
    int ln = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<ln;i++){
        n.push_back(make_pair(arr[i],i));
    }

    
    sort(n.begin(),n.end(),myCompare);

    for(int i=0;i<n.size();i++){
        arr[n[i].second] = i;
    }


    display(arr,ln);
}