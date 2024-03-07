#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

//1. 절대값비교
//2. 절대값이 같으면 입력값 비교

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    priority_queue<pair <int, int>, vector<pair <int, int>>, greater<pair<int, int>>> pq;
    
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;

        if(m == 0){
            //0일때 우선순위 pq의 배열이 비어있다면
            if(pq.empty()){
                //0 출력
                cout << 0 << '\n';
            }else{
                //비어있지 않다면 절대값이 가장 작은 값 출력
                cout << pq.top().second << '\n';
                //배열에서 삭제
                pq.pop();
            }
        }else{
            //0이 아니라면 절대값m과 m값 저장
            pq.push({abs(m), m});
        }
    }

    return 0;
}