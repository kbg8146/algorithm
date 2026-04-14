#include <iostream>

using namespace std;
int excel[1025][1025] = {};
int sum[1025][1025] = {};
int main() {
  ios_base::sync_with_stdio(NULL);
  cin.tie(NULL);
  int n, m;
  cin >> n >> m;
  
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> excel[i][j];
      sum[i][j] =
          excel[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
    }
  }
  for (int i = 0; i < m; i++) {
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int ans =
        sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1];
    cout << ans << "\n";
  }

  return 0;
}