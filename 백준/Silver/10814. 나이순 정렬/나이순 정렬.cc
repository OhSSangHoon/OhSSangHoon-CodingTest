#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//비교를 위한 bool 함수compare
bool compare(pair<int, string> a, pair<int, string> b){
    return a.first < b.first; //나이가 적으면 앞으로
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;

    cin >> T;

    vector<pair<int, string>> member(T); //동적배열 member

    for(int i = 0; i < T; i++){
        cin >> member[i].first >> member[i].second; //member배열의 첫번째(나이) 두번째(이름) 입력
    }

    //나이 순으로 정렬하고, 나이가 같다면 입력한 순서대로 정렬
    stable_sort(member.begin(), member.end(), compare);

    //출력
    for(int i = 0; i < T; i++){
        cout << member[i].first << " " << member[i].second << '\n';
    }

    return 0;
}