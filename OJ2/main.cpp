#include <cmath>
#include <iostream>
using namespace std;

int sum_of_digits_cube(int x) {
  if (x == 0)
    return 0;
  else
    return pow((x % 10), 3) + sum_of_digits_cube(x / 10);
}

int main(void) {
  int x;
  for (; cin >> x;) {
    if (sum_of_digits_cube(x) == x)
      cout << "yes" << endl;
    else
      cout << "no" << endl;
  }
  return 0;
}