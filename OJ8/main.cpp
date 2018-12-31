#include <cmath>
#include <iostream>
#include <sstream>
using namespace std;

stringstream ss;

int serach(int lower, int upper, int ans, int times) {
  if (ans > round((lower + upper) / 2.0)) {
    ss << (int)round((lower + upper) / 2.0) << "->";
    return serach(round((lower + upper) / 2.0), upper, ans, times + 1);
  } else if (ans < round((lower + upper) / 2.0)) {
    ss << (int)round((lower + upper) / 2.0) << "->";
    return serach(lower, round((lower + upper) / 2.0), ans, times + 1);
  } else {
    ss << (int)round((lower + upper) / 2.0) << endl;
    return times;
  }
}

int main(void) {
  int ans, times;

  for (; cin >> ans;) {
    times = serach(0, pow(10, ceil(log10(ans))), ans, 1);
    if (times == 1)
      cout << times << " time : " << ss.str();
    else
      cout << times << " times : " << ss.str();
  }

  return 0;
}