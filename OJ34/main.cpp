#include <iostream>
using namespace std;

int main(void) {
  int x, cnt;

  for (; cin >> x;) {
    for (int i = 1; i <= x; i++) {
      cnt = 0;
      for (int j = 1; j <= i; j++) {
        if (i % j == 0) cnt++;
      }
      if (cnt == 2) {
        cout << i << endl;
      }
    }
  }

  return 0;
}