#include <iostream>
using namespace std;

int gcd(int m, int n) {
  if (n == 0)
    return m;
  else
    return gcd(n, m % n);
}

int lcm(int m, int n) { return (m * n) / gcd(m, n); }

int main() {
  int x, y, z;

  for (; cin >> x >> y >> z;) {
    cout << gcd(gcd(x, y), z) << endl;
    cout << lcm(lcm(x, y), z) << endl;
  }

  return 0;
}