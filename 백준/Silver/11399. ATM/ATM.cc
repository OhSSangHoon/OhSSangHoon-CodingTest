#include <iostream>
#include <algorithm>

using namespace std;

// p1 = 3
// p2 = 1
// p3 = 4
// p4 = 3
// p5 = 2

int main(){
    int n;
    int arr[1000];
    int sum = 0;

    cin >> n;

    for(int i =0; i < n; i++){
        cin >> arr[i];
    }


    //sort함수를 이용한 정렬
    sort(arr, arr+n);

    for(int i =0; i< n; i++){
        sum += arr[i]*(n-i);
    }

    cout << sum << endl;

    return 0;
}