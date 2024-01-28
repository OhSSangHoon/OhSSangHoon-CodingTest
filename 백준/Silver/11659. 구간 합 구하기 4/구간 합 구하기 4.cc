#include <iostream>

using namespace std;

//현재 시간복잡도는 O(m * (s - f + 1))
//O(n)으로 만들어야함

int main(){
    ios_base::sync_with_stdio(false);
    //입출력 묶음
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m,f,s; //수의 개수 n, 구해야 하는 횟수 m

    cin >> n >> m;

    int arr[n]; //배열 arr크기 지정
    int prefixsum[n + 1];

    //배열 arr에 값 넣기
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //누적 합 계산
    prefixsum[0] = 0;
    for(int i = 1; i <= n; i++){
        prefixsum[i] = prefixsum[i - 1] + arr[i - 1];
    }

    for(int i = 0; i < m; i++){
        int sum =0;

        cin >> f >> s;

        sum = prefixsum[s] - prefixsum[f - 1];
        
        cout << sum << '\n';
    }
    return 0;
}