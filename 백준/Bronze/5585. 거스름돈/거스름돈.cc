#include <iostream>

using namespace std;

int main(){
    int m = 1000; //타로가 낸 금액
    int arr[] = {500,100,50,10,5,1}; //잔돈 종류
    int n, k = 0;

    cin >> n;

    int sum = 0;
    sum = m - n;

    //거스름돈의 개수를 구하는 공식
    for(int i =0; i < 6; i++){
        k += sum / arr[i];
        sum = sum % arr[i];
    }

    cout << k << endl;

    return 0;
}