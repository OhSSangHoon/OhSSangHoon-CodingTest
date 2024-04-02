#include <iostream>
#include <algorithm>

using namespace std;

    int n, m;
    int rope[100001]; // 1 <= n <= 100000

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> rope[i];
    }

    sort(rope, rope + n);

    for(int i = 0; i < n; i++){
        m = max(m, (n-i)*rope[i]);
    }

    cout << m;

    return 0;
}