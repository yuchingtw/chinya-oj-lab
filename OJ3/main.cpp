#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(void) {
  string line, temp, output;

  for (; getline(cin, line, '@');) {
    stringstream ss(line);
    for (; getline(ss, temp, ',');) {
      reverse(temp.begin(), temp.end());
      output.append(temp);
      output.append(",");
    }
    output.replace(output.end() - 1, output.end(), "@");
    cout << output << endl;
  }

  return 0;
}