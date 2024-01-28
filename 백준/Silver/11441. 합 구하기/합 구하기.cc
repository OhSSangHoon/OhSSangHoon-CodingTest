#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m,f,s;
    int sum = 0;

    cin >> n;

    int arr[n];

    int prefixsum[n + 1]; //누적합 저장 배열

    for(int i =0; i < n; i++){
        cin >> arr[i];

        // cout << arr[i] << " ";
    }


    //누적 합 계산
    prefixsum[0] = 0;
    
    for(int i =1; i <= n; i++){
        prefixsum[i] = prefixsum[i - 1] + arr[i - 1];

        // cout << prefixsum[i] << " ";
    }

    cin >> m;

    for(int i =0; i < m; i++){
        cin >> f >> s;

        sum = prefixsum[s] - prefixsum[f - 1];

        cout << sum << '\n';
    }
    return 0;
}