#include<iostream>
using namespace std;
int main(){
    int pocketmoney;

    for(int date=1;date<=30;date++){
        cin>>pocketmoney;
        if(date%2==0){
            continue;
        }
        cout<<"Go for shopping";
        if(pocketmoney==0){
            break;
        }
    }
    return 0;
}