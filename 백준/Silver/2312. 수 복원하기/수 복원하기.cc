#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;

    //테스트 케이스 수만큼 반복
    for(int i =0; i < n; i++){
        int c;

        cin >> c;


        //c의 소인수분해를 위해 반복
        //j는 2부터 증가하며 c의 값이 1보다 작아질때까지 반복
        for(int j = 2; c > 1; ++j){
            int cnt = 0;

            //나머지 값이 0이라면 반복문 종료
            while( c % j == 0){
                cnt += 1; //반복문이 종료되기 전까지 cnt 증가
                c /= j; //c를 j로 나눈값 저장
            }

            //cnt의 값이 0이 아니라면 문제 출력
            if(cnt != 0){
                cout << j << " " << cnt << "\n";
            }
        }
    }

    return 0;
}