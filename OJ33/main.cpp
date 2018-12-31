#include <iostream>
using namespace std;

int main(void) {
  int n;

  for (; cin >> n;) {
    for (int i = 1; i <= n - 1; i++) {
      for (int j = 1; j <= 3 * n - 2 - i; j++) cout << " ";
      for (int k = 1; k <= 2 * i - 1; k++) {
        if (k % 2)
          cout << "*";
        else
          cout << " ";
      }
      cout << endl;
    }

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= i - 1; j++) cout << " ";
      for (int k = 1; k <= 6 * n - 2 * i - 3; k++) {
        if (k % 2)
          cout << "*";
        else
          cout << " ";
      }
      cout << endl;
    }

    for (int i = 1; i <= n - 1; i++) {
      for (int j = 1; j <= n - i - 1; j++) cout << " ";
      for (int k = 1; k <= 4 * n + 2 * i - 2; k++) {
        if (k % 2)
          cout << "*";
        else
          cout << " ";
      }
      cout << endl;
    }

    for (int i = 1; i <= n - 1; i++) {
      for (int j = 1; j <= 2 * n + i - 2; j++) cout << " ";
      for (int k = 1; k <= 2 * n - 2 * i - 1; k++) {
        if (k % 2)
          cout << "*";
        else
          cout << " ";
      }
      cout << endl;
    }
  }

  return 0;
}