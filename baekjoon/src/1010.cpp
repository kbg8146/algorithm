#include <iostream>
using namespace std;

// 조합 값을 저장할 DP 테이블 (M의 최대가 29이므로 30 정도로 설정)
long long dp[31][31];

int main() {
  // 1. DP 테이블 초기화 (파스칼의 삼각형)
  for (int i = 0; i <= 30; i++) {
    dp[i][0] = 1; // i개 중 0개를 뽑는 경우
    dp[i][i] = 1; // i개 중 i개를 모두 뽑는 경우
  }

  for (int i = 2; i <= 30; i++) {
    for (int j = 1; j < i; j++) {
      dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
    }
  }

  int tc;
  cin >> tc;
  while (tc--) {
    int n, m;
    cin >> n >> m;
    // 결과 출력 (mCn)
    cout << dp[m][n] << "\n";
  }
  return 0;
}