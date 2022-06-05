#include <bits/stdc++.h>
using namespace std;
bool myCompare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
int main()
{
    // pair <int,char> p;
    // p.first = 12;
    // p.second = 'Q';
    // cout<<p.first<<endl;
    pair<int, char> p;
    p.first = 3;
    p.second = 'a';
    int arr[8] = {10, 16, 7, 14, 5, 3, 12, 9};
    // we need to reduce this array so output will be: [4,7,2,6,1,0,5,3]
    // first we need to sort the array but if we sort directly then indexes will be lost
    // now we need to keep both things in place, index and values
    // sort the array with it's index:
    //          [3,5,7,9,10,12,14,16]
    // indexes: [5,4,2,7, 0, 6, 3, 1]
    // now we can use pairs here
    vector<pair<int, int>> v;
    for (int i = 0; i < 8; i++)
    {
        v.push_back(make_pair(arr[i], i));
    }
    sort(v.begin(), v.end(), myCompare);
    for(int i=0;i<v.size();i++){
        arr[v[i].second]=i;
    }
    cout<<"Reduced Array:"<<endl;
    for(int i=0;i<8;i++){
        cout<<arr[i]<<endl;
    }
}