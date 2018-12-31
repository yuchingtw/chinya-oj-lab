#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main(void) {
  int length[3];

  for (; cin >> length[0] >> length[1] >> length[2];) {
    sort(length, length + 3);
    if (length[0] + length[1] <= length[2])
      cout << "N" << endl;
    else if (pow(length[0], 2) + pow(length[1], 2) == pow(length[2], 2))
      cout << "Y" << endl << "Right triangle" << endl;
    else if ((length[0] == length[1]) && (length[1] == length[2]) &&
             (length[0] == length[2]))
      cout << "Y" << endl << "Regular triangle" << endl;
    else
      cout << "Y" << endl << "Isosceles triangle" << endl;
  }

  return 0;
}