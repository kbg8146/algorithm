#include <iostream>

using namespace std;

int main() {

  int socks[6] = {0};
  for (int i = 0; i < 5; i++) {
    cin >> socks[i];
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (i != j && socks[i] == socks[j]) {
        socks[i] = 0;
        socks[j] = 0;
      }
    }
  }
  for (int i = 0; i < 5; i++) {
    if (socks[i] != 0) {
      cout << socks[i];
      return 0;
    }
  }
  cout << 0;
  return 0;
}