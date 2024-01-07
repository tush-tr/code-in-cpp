#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;

    // write a loop to find sum of n natural number
    int i = 1;
    while (i <= n)
    {
        sum += i;
        i++;
    }

    cout << sum;
}