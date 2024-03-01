#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  int n;

  cin >> n;

  stack<int> st;

  for (int i = 0; i < n; i++) {
    string cmd;

    cin >> cmd;

    if (cmd == "push") {
      int m;
      cin >> m;
      st.push(m);
    } else if (cmd == "pop") {
      if (st.empty()) {
        cout << -1 << "\n";
      } else {
        cout << st.top() << "\n";
        st.pop();
      }
    } else if (cmd == "size") {
      cout << st.size() << "\n";
    } else if (cmd == "empty") {
      if (st.empty()) {
        cout << "1"
             << "\n";
      } else {
        cout << "0"
             << "\n";
      }
    } else if (cmd == "top") {
      if (st.empty()) {
        cout << "-1"
             << "\n";
      } else {
        cout << st.top() << "\n";
      }
    }
  }
  return 0;
}