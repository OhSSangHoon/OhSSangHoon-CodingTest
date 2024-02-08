#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    
    cin >> n;

    //구현하지 않고 푸는방법이 있다.

    //n의 제곱근을 구하면 된다.
    int cnt = sqrt(n);

    cout << cnt;

    // //index 1부터 사용
    // int *arr =  new int[n+1]();


    // //1의 배수인 창문을 연다(모든 창문을 염)
    // for(int i = 1; i <= n; i++){
    //     arr[i] = 1;
        
    //     // cout << arr[i] << " ";
    // }

    // int cnt = 0;

    // //2번째부터 자신의 배수인 창문을 닫는다.
    // for(int i = 2; i <=n; i++){
    //     for(int j = i; j <=n; j += i){
    //         arr[j] = 1 - arr[j];
    //     }
    // }

    // for(int i = 1; i <= n; i++){
    //     if(arr[i] == 1){
    //         cnt += 1;
    //     }
    // }

    // cout << cnt;

    return 0;
}