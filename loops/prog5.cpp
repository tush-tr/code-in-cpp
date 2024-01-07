#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    // write a loop to find sum of the factors of number
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    // check if number is perfect or not
    if (n * 2 == sum)
    {
        cout << "perfect";
    }
    else
    {
        cout << "not perfect";
    }
}