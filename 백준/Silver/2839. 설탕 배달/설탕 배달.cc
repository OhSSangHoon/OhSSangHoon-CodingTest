#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    
    int n;

    cin >> n;

    int cnt = 0;

    while(n>=0){
        //설탕봉지가 5kg으로 나눌수있으면
        //cnt에 (n / 5)값 저장
        if(n % 5 == 0){
            cnt += (n / 5);
            cout << cnt << '\n';
            return 0;
        }

        //n이 5로 나누어지지않는다면 -3을 뺴고
        n -= 3;
        //봉지의 수 1 증가 반복
        cnt++;
    }
    
    cout << -1 << endl;
}