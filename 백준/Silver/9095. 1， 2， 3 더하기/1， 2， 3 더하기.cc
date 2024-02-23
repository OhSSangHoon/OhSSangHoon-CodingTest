#include <iostream>

using namespace std;

// 1, 2, 3만을 사용해서 정수 n을 합으로 나타내는 방법의 수 구하기

//점화식: dp[i] = dp[i-1] + dp[i-2] + dp[i-3]

int main() {
  ios_base::sync_with_stdio(false);
  int t, n;

  int dp[12] = {
      0,
  };

  cin >> t;

  // 1, 2, 3 초기값 설정
  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 4;

  for (int i = 0; i < t; i++) {
    cin >> n;
    // 4부터 n까지 방법의 수 구하기
    for (int j = 4; j <= n; j++) {
      dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
    }
    cout << dp[n] << '\n';
  }

  return 0;
}