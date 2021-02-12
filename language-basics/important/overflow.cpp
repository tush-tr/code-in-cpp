#include <cstdint>
#include<iostream>
using namespace std;
int main(){
    // Rough ranges of data types--
    // -10^9 < int < 10^9
    // -10^12 < long int < 10^12
    // -10^18 < long long int < 10^18
    int a = 100000;
    long int b = 10000000;
    long long int c = 100000000;

    int mx = INT16_MAX;
    cout<<mx<<endl;
    cout<< INT32_MAX<<endl;
    cout<< INT64_MAX << endl;

}