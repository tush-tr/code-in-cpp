//          **********
//         **********
//        **********
//       **********
//      **********
//     **********
//    **********
//   **********
//  **********
// **********

#include<iostream>
using namespace std;
int main(){
    int n=10;
    int count = n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=count;j++){ // here we can also do like this-- j<=n-i
            cout<<" ";
        }
        for(int j=1;j<=n;j++)
        {
            cout<<"*";

        }
        count--;
        cout<<endl;
    }

    return 0;
}