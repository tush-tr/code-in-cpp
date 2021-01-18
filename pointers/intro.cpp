#include<iostream>
using namespace std;
void afun(int *arr){
    for(int i=0;i<10;i++){
        cout<<arr[i];
    }
}
int main(){
    int a = 10;
    cout<<&a<<endl; // hexadecimal
    int *p_a = &a;
    cout<<p_a<<endl;
    cout<<"Value of a: "<<*p_a<<endl;
    *p_a = 13;
    cout<<a<<endl;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p_arr = arr;
    cout<<p_arr<<endl;
    cout<<*p_arr<<endl;
    cout<<*p_arr+1<<endl;
    for(int i=0;i<10;i++){
        cout<<*p_arr<<endl;
        p_arr++;
    }
    afun(arr);
    return 0;
}