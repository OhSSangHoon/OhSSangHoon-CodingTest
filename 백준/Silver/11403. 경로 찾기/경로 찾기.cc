#include <iostream>
#include <vector>

using namespace std;


int main(){
    int T; //테스트케이스

    cin >> T;

    vector<vector <int>> arr(T, vector<int>(T)); //2차원 배열 생성

    for(int i = 0; i < T; i++){
        for(int j = 0; j < T; j++){
            cin >> arr[i][j];
        }
    }

    //플로이드-워셜 알고리즘의 시간 복잡도는 O(n^3)
    for(int k = 0; k < T; k++){
        for(int i = 0; i < T; i++){
            for(int j = 0; j < T; j++){
                //ex) arr[1][2] = 1, arr[2][1]= 1이면
                if(arr[i][k] && arr[k][j])
                arr[i][j] = 1; //arr[1][1] = 1;
            }
        }
    }

    for(int i = 0; i < T; i++){
        for(int j = 0; j < T; j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}