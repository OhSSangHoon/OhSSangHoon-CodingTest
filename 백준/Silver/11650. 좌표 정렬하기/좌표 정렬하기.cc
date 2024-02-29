#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    int n;

    cin >> n;

    vector<pair<int, int>> arr(n);//x, y좌표를 저장하기 위한 pair

    for(int i = 0; i < n; i++){
        cin >> arr[i].first >> arr[i].second;
    }

    //sort함수는 기본적으로 x(pair의 첫번째 요소를 기준으로 정렬하고, 첫 번째
    //요소가 같을 경우 두 번째 요소를 기준으로 정렬한다.)
    sort(arr.begin(), arr.end());

    for(int i = 0; i < n; i++){
        cout << arr[i].first << " " << arr[i].second << '\n';
    }

    return 0;
}