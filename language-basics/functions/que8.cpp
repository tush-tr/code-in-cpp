#include<iostream>
using namespace std;
int max(int a,int b,int c){
    if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }
}



int min(int a,int b,int c){
    if(a<b){
        if(a<c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b<c){
            return b;
        }
        else{
            return c;
        }
    }
}


int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"Minimum number is: "<<min(a,b,c)<<endl;
    cout<<"Maximum Number is: "<<max(a,b,c)<<endl;
    return 0;
}