#include <iostream>
using namespace std; 

int main(){
    int n;
    cin>>n;
     int fact=1;
    
    //write a loop for finding factorial on n
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    cout<<fact;

}