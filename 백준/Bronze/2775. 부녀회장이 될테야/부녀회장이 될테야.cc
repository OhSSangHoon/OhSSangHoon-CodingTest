#include <iostream>

using namespace std;

//y = 층, x = 호 일때
//f(y,x) = f(y, x-1) + f(y-1, x);의 점화식이 성립한다.

int main(){
    ios_base::sync_with_stdio(false);
    int T; //테스트케이스 T

    int arr[15][15] = {0,};

    cin >> T;

    for(int i = 0; i < T; i++){
        int n, k; //호수 n, 층수 k

        cin >> k >> n;

        for(int i = 0; i <=k; i++){
            for(int j = 1; j <=n; j++){
                //만약에 층수가 0층이면
                if(i == 0){
                    arr[0][j] = j; //호수에 j값 그대로 저장

                    //만약 호수가 1이라면 i층의 1호에 값 1저장
                }else if(j == 1){
                    arr[i][1] = 1;
                }else{
                    arr[i][j] = arr[i][j-1] + arr[i-1][j];
                }
            }
        }
        cout << arr[k][n] << '\n'; //
    }

    return 0;
}