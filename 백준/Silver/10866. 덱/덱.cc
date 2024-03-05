#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);

    int n;

    cin >> n;
    
    deque<int> deque;

    for(int i = 0; i < n; i++){
        string cmd;
        int m;

        cin >> cmd;

        if(cmd == "push_front"){
            cin >> m;
            deque.push_front(m);
        }else if(cmd == "push_back"){
            cin >> m;
            deque.push_back(m);
        }else if(cmd == "pop_front"){
            if(deque.empty()){
                cout << -1 << "\n";
            }else{
                cout << deque.front() << '\n';
                deque.pop_front();
            }
        }else if(cmd == "pop_back"){
            if(deque.empty()){
                cout << -1 << "\n";
            }else{
                cout << deque.back() << '\n';
                deque.pop_back();
            }
        }else if(cmd == "size"){
            cout << deque.size() << '\n';
        }else if(cmd == "empty"){
            if(deque.empty()){
                cout << 1 << '\n';
            }else{
                cout << 0 << '\n';
            }
        }else if(cmd == "front"){
            if(deque.empty()){
                cout << -1 << '\n';
            }else{
                cout << deque.front() << '\n';
            }
        }else if(cmd == "back"){
            if(deque.empty()){
                cout << -1 << '\n';
            }else{
                cout << deque.back() << '\n';
            }
        }
    }
    return 0;
}