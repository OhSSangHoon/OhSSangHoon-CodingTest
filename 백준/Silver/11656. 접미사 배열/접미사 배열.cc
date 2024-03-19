#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    
    cin >> s;

    vector<string> arr; //접미사 저장할 벡터 arr

    for(int i = 0; i < s.size(); i++){
        arr.push_back(s.substr(i)); //문자열 s를  arr에 추가
    }

    sort(arr.begin(), arr.end()); //사전순으로 정렬

    //arr 벡터의 각 문자열에 대해 모두 순회하여 하나씩 출력
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << '\n';
    }

    // 이런 방법도 있다고 한다.
    // for(const string& arr : arr){
    //     cout << arr << '\n';
    // }

    return 0;
}