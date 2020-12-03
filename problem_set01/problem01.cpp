// *******
// *******
// *******
// *******
// *******

#include <iostream>
using namespace std;
int main()
{
    int row,column;
    cout<<"Enter no. of rows: ";
    cin>>row;
    cout<<"Enter no. of columns: ";
    cin>>column;
    for (int a = 1; a <= row; a++)
    {
        for (int i = 1; i <= column; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}