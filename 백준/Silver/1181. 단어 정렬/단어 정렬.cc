#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 두 문자열을 비교하는 함수
bool compare(string a, string b) {
    // 두 문자열의 길이가 같다면 사전 순으로 비교
    if (a.length() == b.length()) {
        return a < b;
    } else {
        // 그렇지 않다면 길이가 짧은 순으로 비교
        return a.length() < b.length();
    }
}

int main() {
    int N;  // 단어의 개수를 저장할 변수
    cin >> N;

    vector<string> words(N);  // 단어를 저장할 벡터 words 생성
    for (int i = 0; i < N; i++) {
        cin >> words[i];  // 단어 입력
    }

    // compare 함수를 이용하여 단어들을 정렬
    sort(words.begin(), words.end(), compare);
    // unique로 먼저 중복단어를 찾아서 맨뒤로 보낸다음 erase로 중복 단어 제거
    words.erase(unique(words.begin(), words.end()), words.end());

    // 정렬된 단어 출력
    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << '\n';
    }

    return 0;
}
