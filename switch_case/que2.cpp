#include<iostream>
using namespace std;
int main(){
    char al;
    cout<<"Enter a alphabet";
    cin>>al;
    char st[20]="Alphabet is a vowel";
    switch (al)
    {
    case 'a':
        cout<<st;
        break;
    case 'e':cout<<st;break;
    case 'i':cout<<st;break;
    case 'o':cout<<st;break;
    case 'u':cout<<st;break;
    default:
        cout<<"Alphabet is a consonant";
        break;
    }
    cout<<endl;
    
    return 0;
}