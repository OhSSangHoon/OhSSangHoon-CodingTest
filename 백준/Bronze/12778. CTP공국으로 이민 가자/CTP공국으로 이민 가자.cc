#include <iostream>

using namespace std;

//1. 시험문제의 개수 N의 크기만큼 반복문 실행
//2. 알파벳 또는 숫자의 개수 M, 알파벳을 숫자로 변경하는 C, 숫자를 알파벳으로 변경하는 N
//3. M의 크기만큼 반복문 실행 s가 C라면 char c를 입력 후 int형으로 변경 후 출력
//4. s가 N이라면 int c를 입력 후 char형으로 변경 후 출력

int main(){
    int n;
    cin >> n;

    for(int i =0; i < n; i++){
        int m = 0;
        char s;

        cin >> m >> s;
        
        if(s == 'C'){
            for(int j = 0; j < m; j++){
                char c;
                cin >> c;
                cout << (int)(c - 'A' + 1) << " ";
            }
        }else if(s == 'N'){
            for(int j = 0; j < m; j++){
                int c;
                cin >> c;
                cout << (char)('A' + c - 1) << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
