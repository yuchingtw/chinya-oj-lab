#include <iostream>
using namespace std;

int bin(int n, int m) {
  if (m == 0 || n == m)
    return 1;
  else
    return (bin(n - 1, m) + bin(n - 1, m - 1));
}

int main() {
  int n, i;

  for (; cin >> n;) {
    for (i = 0; i <= n; i++) cout << bin(n, i) << " ";
    cout << endl;
  }

  return 0;
}