#include <iostream>
using namespace std;
class myClass {
public:
  int a;
  void funcA() { cout << "Func A" << endl; }
  void setPrivate(int g) { p = g; }
  void showPrivate() { cout << p << endl; }

private:
  int p;
  void funcB() { cout << "Func B" << endl; }

protected:
  void funcC() { cout << "Func C" << endl; }
};
int main() {
  myClass a;
  a.funcA();
  a.setPrivate(14);
  a.showPrivate();
}