#include<bits/stdc++.h>
using namespace std;
void display(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int> n;
    n = {10,16,7,14,5,3,12,9};
    for(int j=0;j<n.size();j++)
    {
        int a;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]<n[i+1])
            {
            a = i;
            }

        }
        n[a] = j;
    }
    display(n);
}