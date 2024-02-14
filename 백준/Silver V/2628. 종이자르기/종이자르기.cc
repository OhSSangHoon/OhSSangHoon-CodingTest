#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int w, h, n;
    cin >> w >> h >> n;

    vector<int> x{0, w}, y{0, h};

    for (int i = 0; i < n; i++) {
        int dir, pos;
        cin >> dir >> pos;
        if (dir == 0) {
            y.push_back(pos);
        } else {
            x.push_back(pos);
        }
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    int max_w = 0, max_h = 0;
    for (int i = 1; i < x.size(); i++) {
        max_w = max(max_w, x[i] - x[i - 1]);
    }
    for (int i = 1; i < y.size(); i++) {
        max_h = max(max_h, y[i] - y[i - 1]);
    }

    cout << max_w * max_h << endl;

    return 0;
}
