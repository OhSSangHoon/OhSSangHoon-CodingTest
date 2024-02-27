#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T; // 테스트케이스의 개수

    cin >> T;

    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i = 0; i < T; i++){
        int n;
        cin >> n;
        //입력값이 0이고
        if(n == 0){
            //pq배열이 비어있다면
            if(pq.empty()){
                cout << 0 << '\n'; //0 출력
            }else{
                //비어있지 않다면
                cout << pq.top() << '\n'; //pq첫번째 배열 값 출력
                pq.pop(); //pq첫번째값 삭제
            }
        }else{
            //0이 아니라면 pq에 값 저장
            pq.push(n);
        }
    }

    return 0;
}