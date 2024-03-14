#include <iostream>

using namespace std;

// 최소공배수
int gcd(int a, int b) {
  int c = a % b;
  while (c != 0) {
    a = b;
    b = c;
    c = a % b;
  }
  return b;
}

// 최대공약수
int lcd(int a, int b) {
  int c = (a * b) / gcd(a, b);

  return c;
}

int main() {
  int a, b;

  cin >> a >> b;

  cout << gcd(a, b) << endl;
  cout << lcd(a, b) << endl;

  return 0;
}