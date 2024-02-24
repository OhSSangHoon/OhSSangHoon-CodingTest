#include <iostream>
#include <unordered_map>

using namespace std;

//우선 해시에 패스워드와 사이트주소를 전부 저장한뒤
//사이트 주소를 입력해 그에 맞는 패스워드만 출력시킨다.

int main(){
    ios_base::sync_with_stdio(false);
    int n, m;

    cin >> n >> m;

    unordered_map<string, string> password;

    string key, value;

    for(int i =0; i < n; i++){

        cin >> key >> value;

        password[key] = value;
        
        // cout << "key: " << key << "  value: " << value << "\n";
    }

    //key값(사이트 주소)를 입력해 해당 사이트 주소의 패스워드 출력
    for(int i = 0; i < m; i++){
        cin >> key;

        cout << password[key] << "\n";
    }

    return 0;
}