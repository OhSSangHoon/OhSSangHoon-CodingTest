#include <iostream>

using namespace std;

int main(){
    int n, w, h;
    int map[100][100];

    cin >> n;

        // 가로100, 세로100 크기의 정사각형 도화지 생성
    for(int i =0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            map[i][j] = 0;
        }
    }

    int cnt = 0;

    for(int i =0; i < n; i++){

        cin >> w >> h;

        for(int j = w; j < w+10; j++){
            for(int k = h; k < h+10; k++){
                map[j][k] = 1;
                //여기에 cnt를 증가하는 방식을 사용해봤으나 그렇게 하면 중복된 부분을 찾지않고
                //전체 크기만큼 증가시켜 300이 나옴
            }
        }
    }

    for(int i =0; i < 100; i++){
        for(int j =0; j < 100; j++){
            cnt += map[i][j]; //때문에 mnap[i][j]를 반복문으로 돌면서 1인 부분만 증가시키도록 했음
        }
    }

    cout << cnt << endl;

    return 0;
}