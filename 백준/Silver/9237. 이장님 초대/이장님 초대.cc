#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    vector<int> v;

    cin >> n;

    for(int i = 0; i < n; i++){
        int t; //나무가 자라는데 걸리는 시간(일)
        cin >> t;

        v.push_back(t);
    }

    sort(v.rbegin(), v.rend()); //역방향

    int days = 0;

    for(int i = 0; i < n; i++){
        days=max(days,v[i]+i+1); //묘목을 구입한 날이 1일이므로 + 1
    }

    cout << days + 1; //마지막 나무가 다 자란 다음날 이장님 초대 + 1

    return 0;
}