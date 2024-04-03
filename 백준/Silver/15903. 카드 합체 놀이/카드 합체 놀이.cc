#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<long long> arr;
    int n,m;

    cin >> n >> m;

    for(int i = 0; i < n; i ++){
        int card;
        cin >> card;
        arr.push_back(card);
    }

    long long ans = 0;

    while(m--){
        sort(arr.begin(), arr.end());
        long long sum = arr[0] + arr[1]; //가장 작은수와 그다음 작은 수를 m번씩 더함
        arr[0] = sum;
        arr[1] = sum;
    }

    for(int i = 0 ; i < arr.size(); i++){
        ans += arr[i];
    }

    cout << ans;

    return 0;
}