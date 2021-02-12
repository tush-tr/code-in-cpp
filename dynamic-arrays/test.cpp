#include <iostream>
using namespace std;
int Rot(int arr[], int d, int count) {
int temp[d];
int arr2[count];

for (int i=0;i<count;i++){
    if(i<d){
        temp[i]= arr[i];
    }
    else{
        arr2[i-d]=arr[i];
    }
}

for(i=0;i<d;i++){
    arr2[i+count-d] = temp[i];
}

Return arr2;

}