#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);

    int n;
    
    cin >> n;

    queue<int> q;
    for(int i = 0; i < n; i++){
        string cmd;

        cin >> cmd;

        if(cmd == "push"){
            int m;
            cin >> m;
            q.push(m);
        }else if(cmd == "pop"){
            if(!q.empty()){
                cout << q.front() << '\n';
                q.pop();
            }else{
                cout << -1 << '\n';
            }
        }else if(cmd == "size"){
            cout << q.size() << '\n';
        }else if(cmd == "empty"){
            cout << q.empty() << '\n';
        }else if(cmd == "front"){
            if(!q.empty()){
                cout << q.front() << '\n';
            }else{
                cout << -1 << '\n';
            }
        }else if(cmd == "back"){
            if(!q.empty()){
                cout << q.back() << '\n';
            }else{
                cout << -1 << '\n';
            }
        }
    }

    return 0;
}