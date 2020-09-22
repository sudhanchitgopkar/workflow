#include <iostream>

using namespace std;

/*
int foo (int x) {
  x += 10;
  return x + 5;
} //foo

int bar (int& x) {
  x = 2720;
  return x - 100;
} //bar

int main () {
  int val1 = 1730;
  int val2 = 42;

  cout << foo(val1) << endl;
  cout << val1 << endl;
  cout << foo(val2) << endl;
  cout << val2 << endl;
  
  cout << bar(val1) << endl;
  cout << val1 << endl;
  cout << bar(val2) << endl;
  cout << val2 << endl;
}; //main
*/

int main () {
  int x = 1000;
  int& y = x;

  x += 100;
  cout << x << endl;
  cout << y << endl;

  y = 2020;
  cout << x << endl;
  cout << y << endl;
} //main
