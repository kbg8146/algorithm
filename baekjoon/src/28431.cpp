#include <iostream>
using namespace std;

int main() {
  int result = 0;
  for (int i = 0; i < 5; i++) {
    int x;
    cin >> x;
    result ^= x;
  }
  cout << result << endl;
  return 0;
}