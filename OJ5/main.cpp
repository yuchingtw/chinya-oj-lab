#include <iostream>
using namespace std;

int sum_of_factors(int cnt, int x) {
  if (cnt == x)
    return 0;
  else
    return (x % cnt == 0) * cnt + sum_of_factors(cnt + 1, x);
}

int main() {
  int x;

  for (; cin >> x;) {
    if (sum_of_factors(1, x) > x)
      cout << "abundant number" << endl;
    else if (sum_of_factors(1, x) == x)
      cout << "perfect number" << endl;
    else
      cout << "deficient number" << endl;
  }

  return 0;
}