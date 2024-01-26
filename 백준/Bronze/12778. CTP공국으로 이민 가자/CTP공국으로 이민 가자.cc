#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a = 1;

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
        }else if (s == 'N'){
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