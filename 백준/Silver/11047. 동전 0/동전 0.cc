#include <iostream>

using namespace std;

int main(){
    int n;
    int k; //값이 1억까지라 long long형 사용할 수 있음
    int c[10];
    //동전의 종류의 개수 n, 가치의 합 k
    cin >> n >> k;

    for(int i =0; i < n; i++){
        cin >> c[i]; //동전의 종류
    }


    int sum = 0;

    for(int i = n-1; i >= 0; i--){
        sum += k / c[i]; //핑요한 동전의 개수
        k = k % c[i];
    }

    cout << sum << endl;

    return 0;
}