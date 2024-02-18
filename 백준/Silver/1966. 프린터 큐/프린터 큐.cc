#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int t;    //테스트 케이스
    cin >> t;

    while(t--) {
        int n, m; //배열의 크기n, 배열의[m]번째 값
        cin >> n >> m;

        queue<pair<int, int>> q;
        priority_queue<int> pq; // 우선순위 큐

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            q.push({i, a});
            pq.push(a);
        }

        int count = 0;
        while (!q.empty()) {
            int index = q.front().first;
            int value = q.front().second;
            q.pop();

            if (pq.top() == value) {
                pq.pop();
                count++;
                if (index == m) {
                    cout << count << endl;
                    break;
                }
            } else {
                q.push({index, value});
            }
        }
    }

    return 0;
}
