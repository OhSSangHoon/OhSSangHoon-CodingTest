#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    for(int i =0; i < n; i++){
        int m;

        cin >> m;

        //j박스 가장자리 윗부분
        for(int j = 0; j < m; j++){
            cout << "#";
        }
        cout << endl;

        //j박스 중앙부분
        for(int j = 0; j < m - 2; ++j){
            cout << "#";
            for(int k = 0; k < m - 2; k++){
                cout << "J";
            }
            cout << "#" << endl;
        }

        if(m > 1){
        //j박스 가장자리 아랫부분
            for(int j = 0; j < m; j++){
                cout << "#";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}