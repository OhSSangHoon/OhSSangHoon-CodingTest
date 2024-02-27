#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;

    cin >> T;

    priority_queue<int> pq;

    for(int i = 0; i < T; i++){
        int n;

        cin >> n;
        //n값이 0이면
        if(n == 0){
            //배열의 empty확인
            if(pq.empty()){
                //비어있으면 0출력
                cout << 0 << '\n';
            }else{
                //0이 아닌 다른 값이면 출력 후
                cout << pq.top() << '\n';
                //우선순위 큐에서 삭제
                pq.pop();
            }
        }else{
            //0이 아닌 값은 pq에 넣음
            pq.push(n);
        }
    }
    
    return 0;
}