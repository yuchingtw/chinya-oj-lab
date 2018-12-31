#include <iostream>
using namespace std;

int main(void) {
  int x, i, j;

  for (; cin >> x;) {
    if (x <= 0) {
      cout << "error" << endl;
    } else {
      for (i = 1; i <= x; i++) {
        for (j = 1; j <= i; j++) cout << j;
        for (; j <= x; j++) cout << "*";
        cout << endl;
      }
    }
  }

  return 0;
}