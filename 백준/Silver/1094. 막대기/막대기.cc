#include <iostream>

using namespace std;

//가장 긴 막대기의 길이보다 필요한 길이가 길다면 해당 막대를 사용하고,
//그렇지 않으면(짧으면) 막대기를 절반으로 자르는 과정을 반복
//n을 만들기 위해 필요한 막대의 최소 개수cnt가 구해진다.

int main(){
    int n;

    cin >> n;

    int cnt = 0;
    int len = 64;

    while(n > 0){
        //만약 입력한 길이가 막대기의 길이보다 길거나 같다면
        if(n >= len){
            n -= len;
            cnt++;
        }

        //막대기를 반으로 나눈다
        len /= 2;
    }

    cout << cnt << endl;

    return 0;
}