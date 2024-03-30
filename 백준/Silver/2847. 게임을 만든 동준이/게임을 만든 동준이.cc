#include <iostream>

using namespace std;

//낮은 레벨에서 높은 레벨까지, 점수가 오름차순을 이루도록 바꾸면 되는 문제

int main(){
    ios_base::sync_with_stdio(0);

    int n;
    int level[101];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> level[i]; //레벨 ㅇ비력
    }

    int cnt = 0;

    for(int i = n - 1; i > 0; i--){
        while(level[i] <= level[i-1]){
            level[i-1]--;
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}