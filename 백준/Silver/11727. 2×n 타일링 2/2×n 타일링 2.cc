#include <iostream>

using namespace std;

//dp[n] = dp[n-1] + dp[n-2]*2

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;

    cin >> n;

    int dp[1000];
    dp[0] = 1;
    dp[1] = 3;

    for(int i = 2; i < n; i++){
        dp[i] = (dp[i-1] + dp[i-2] * 2) % 10007;
    }

    cout << dp[n-1];

    return 0;
}