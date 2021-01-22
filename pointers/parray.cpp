// Explaining pointers -- Tushar Rajput
#include<iostream>
using namespace std;
int main(){
    int arr[10] = {10,25,123,24};
    // cout<<arr; this will print the address of arr[0]
    // cout<<*arr; this will print arr[0]
    int *parr = arr; // take the address of first element of the array to a pointer
    // now *parr is equals to arr[0]
    // cout<<*parr<<endl;
    // so when we increase parr by one it will increase by size of an integer it means
    //  it will become address of next element from last one
    // so we can print full array by looping this pointer increment
    int i=0;
    // Print the full array 
    while(i<4){
        cout<<*parr<<endl; // printing value of pointer
        parr++;
        i++;
    }
    // So we can perform operation with our array using pointers.
    return 0;
}