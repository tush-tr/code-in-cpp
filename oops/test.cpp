#include <iostream>
using namespace std;
int main() {
  int ar[] = {1, 1, 2, 2, 3, 4, 5, 5};
  int num;
  num = sizeof(ar) / sizeof(*ar);
  int *a = int[(sizeof(int))];
  int *b = int[(sizeof(int))];
  NR(ar, num, a, b);
  cout << *a << " and " << *b;
}