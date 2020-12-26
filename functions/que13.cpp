#include<bits/stdc++.h>
using namespace std;
int binarytodecimal(int n){
    int ans = 0;
    int x = 1;
    while(n>0){
        int y = n%10;
        ans += x*y;
        x *= 2;
        n /= 10;
    }
    return ans;
}
int octaltodecimal(int n){
    int ans = 0;
    int x = 1;
    while(n>0){
        int y = n%10;
        ans += x*y;
        x *= 8;
        n /=10;
    }
    return ans;
}

int hexadecimaltodecimal(string n){
    int ans = 0;
    int x = 1;
    int s = n.size();
    for(int i=s-1;i>=0;i--){
        if(n[i] >= '0' && n[i] <= '9'){
            ans += x * (n[i] - '0'); // why 0 is here what is the effect of this zero char
        }
        else if(n[i] >= 'A' && n[i] <= 'F'){
            ans += x* (n[i]-'A' + 10);
        }
        x *= 16;
    }
    return ans;

}

int decimaltobinary(int n){
    int x = 1;
    int ans = 0;
    while(x<=n){
        x *=2;

    }
    x /=2;
    while(x>0){
        int lastdigit = n/x;
        n -= lastdigit*x;
        x /= 2;
        ans = ans*10 + lastdigit;
    }
    return ans;
}

int decimaltooctal(int n){
    int x =1 ;
    int ans = 0;
    while(x<=n){
        x *= 8;
    }
    x /= 8;
    while(x>0){
        int lastdigit = n/x;
        n -= lastdigit*x;
        x /= 8;
        ans = ans*10 + lastdigit;
    }
    return ans;
}

string decimaltohexadecimal(int n){
    int x = 1;
    string ans = "";
    while(x<=n){
        x *= 16;
    }
    x /= 16;
    while(x>0){
        int lastdigit = n/x;
        n -= lastdigit*x;
        x /= 16;
        if(lastdigit <=9){
            ans = ans + to_string(lastdigit);

        }
        else{
            char c = 'A' + lastdigit - 10;
            ans.push_back(c);
        }
    }
    return ans;

}


int main(){
    int n;
    // string str;
    // cin>>n;
    // cout<< "Converting Binary to decimal:- " << binarytodecimal(n)<<endl;
    // cout<< "Converting Octal to decimal:- "<< octaltodecimal(n)<<endl;
    // cin>> str;
    // cout<<hexadecimaltodecimal(str)<<endl;
    cin>>n;
    cout<<decimaltohexadecimal(n)<<endl;
    return 0;
}