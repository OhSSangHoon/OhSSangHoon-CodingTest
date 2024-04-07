#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool desc(int a, int b){
    return a > b;
}

int main(){
    ios_base::sync_with_stdio(0);

    int n;
    
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), desc);

    int sum = 0;

    for(int i = 0; i < n; i++){
        if(i % 3 != 2){
            sum += arr[i];
        }
    }

    cout << sum;

    return 0;
}