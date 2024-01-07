#include <iostream>
using namespace std;
// PRIME NUMER -- a number having factors 1 and itself, it will have only 2 factors
int main()
{
    int n;
    cin >> n;
    int count = 0;

    // Wrote a lopp to count factors
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    // check if number is prime
    if (count == 2)
    {
        cout << "prime";
    }
    else
    {
        cout << "not prime";
    }
}