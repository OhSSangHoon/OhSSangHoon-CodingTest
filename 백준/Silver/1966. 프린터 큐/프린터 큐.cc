#include <iostream>
#include <queue>
#include <vector>

using namespace std;

//큐는 fifo이다.

int main() {
    int t;    //테스트 케이스
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n, m; //배열의 크기n, 배열의[m]번째 값
        cin >> n >> m;

        queue<pair<int, int>> q; //문서의 순서를 저장하는 큐
        priority_queue<int> pq; // 문서의 중요도를 저장하는 우선순위 큐

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            q.push({i, a}); //큐에 문서의 위치 i와 값a 저장
            pq.push(a); //우선순위 큐에 a 저장
        }

        int count = 0;
        //큐가 비어있을때 까지 반복문 실행
        while (!q.empty()) {
            int index = q.front().first; //큐의 문서의 위치와
            int value = q.front().second;//문서의 값을 각각 정수형 변수에 넣고
            q.pop(); //큐에서 삭제

            if (pq.top() == value) { //pq의 가장위의 값이 value의 값(문서의 값)과 같다면
                pq.pop(); //pq큐에서 삭제
                count++; //카운트(중요도) 증가

                //문서의 위치값과 m값이 일치하다면
                if (index == m) {
                    cout << count << endl; //중요도 출력후 탈출
                    break;
                }
            } else { //가장위의 값이 value와 같지않다면
                q.push({index, value}); //큐의 뒤에 다시 넣어준다.
            }
        }
    }

    return 0;
}
