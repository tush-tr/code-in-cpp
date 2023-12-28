#include <iostream>
using namespace std;

int main()
{
    int ls[5] = {1, 1, 2, 2, 4};
    int total = 0;
    int mx = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (ls[i] > mx)
        {
            mx = ls[i];
        }
    }
    cout<<mx<<endl;
}