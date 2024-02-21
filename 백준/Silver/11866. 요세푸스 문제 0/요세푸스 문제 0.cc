#include <iostream>
#include <queue>

using namespace std;

int main(){

    int n, k;

    cin >> n >> k; //사람 수n, 삭제할 순서 k

    queue<int> arr; //큐 arr
    queue<int> josephus; //큐 josephus


    //큐 arr에 1부터 n 저장
    for(int i = 1; i <= n; i++){
        arr.push(i);
    }


    //arr 큐가 빈 값이면 종료
    while(!arr.empty()){
        for(int i = 0; i < k-1; i++){ //arr 큐의 맨 앞의 값을 맨 뒤로 보냄
            arr.push(arr.front()); //arr 큐의 맨 앞값 삭제(k)
            arr.pop();
        }
        josephus.push(arr.front()); //arr 큐의 k번째 값을 josephus에 저장
        arr.pop(); //arr 큐의 맨 앞값(k) 삭제
    }

    cout << "<";

    //josephus 큐의 값들을 출력
    while(!josephus.empty()){
        cout << josephus.front(); //맨 앞값 출력하고
        josephus.pop(); //맨 앞에있는 값 삭제

        //josephus 큐에 다음 값이 있으면 , 출력
        if(!josephus.empty()){
            cout << ", ";
        }
    }

    cout << ">";

    return 0;
}