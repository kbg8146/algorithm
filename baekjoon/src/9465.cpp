#include <iostream>

using namespace std;

int main() {
  int tc;
  cin >> tc;

  for (int i = 0; i < tc; i++) {
    int n;
    cin >> n;
    int sticker[2][100001] = {};
    int sum[2][100001] = {};
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < n; k++) {
        cin >> sticker[j][k];
      }
    }
    sum[0][0] = sticker[0][0];
    sum[1][0] = sticker[1][0];
    sum[0][1] = sticker[1][0] + sticker[0][1];
    sum[1][1] = sticker[0][0] + sticker[1][1];
    for (int j = 2; j < n; j++) {
      sum[0][j] = sticker[0][j] + max(sum[1][j - 1], sum[1][j - 2]);
      sum[1][j] = sticker[1][j] + max(sum[0][j - 1], sum[0][j - 2]);
    }
    cout << max(sum[0][n - 1], sum[1][n - 1]) << "\n";
  }
  return 0;
}
