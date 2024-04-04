#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int n, k, a[10000];

  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n);

  int ans = a[n - 1] - a[0];

  for (int i = 1; i < n; i++) {
    a[i - 1] = a[i] - a[i - 1];
  }

  sort(a, a + n - 1);

  for (int i = n - 2; i >= n - k && i >= 0; i--) {
    ans -= a[i];
  }

  cout << ans;

  return 0;
}