#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    //듣도 못한 사람의 수 n
    //보도 못한 사람의 수 m을 입력
    //두곳에 속한 사람의 수와 이름을 출력

    map<string, int> people;
    int n, m;
    string name;
    vector<string> result;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> name;
        ++people[name];
    }

    int cnt = 0;

    for(int i = 0; i < m; i++){
        cin >> name;

        if(people[name]){
            result.push_back(name);
            cnt++;
        }
    }

    cout << cnt << '\n';
    sort(result.begin(), result.end());
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << '\n';
    }

    return 0;
}