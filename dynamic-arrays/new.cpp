#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[] = {1,2,3,4,5};
    int rotated[n];
    int d = 2;
    for(int i=0;i<d;i++){
        rotated[d+i+1] = arr[i];
    }

    for(int i=0;i<n-d;i++){
        rotated[i] = arr[d+i];
    }




    for(int i=0;i<n;i++){
        cout<<rotated[i]<<endl;
    }
}