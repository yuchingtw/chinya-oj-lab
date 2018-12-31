#include <iostream>
#include <string>
using namespace std;

string check(string input, string ans) {
  if (input.compare(ans) == 0)
    return "true";
  else
    return "false";
}

int main(void) {
  int x, y;
  string text;

  for (; cin >> x >> y >> text;) {
    if (x > y)
      cout << check(text, "bigger") << endl;
    else if (x == y)
      cout << check(text, "equal") << endl;
    else
      cout << check(text, "smaller") << endl;
  }
  return 0;
}