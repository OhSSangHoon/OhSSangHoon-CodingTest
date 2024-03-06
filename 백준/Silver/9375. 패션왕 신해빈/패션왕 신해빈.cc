#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    int T;

    cin >> T;

    for(int i = 0; i < T; i++){
        int n;

        cin >> n;

        map<string, int> data;
        for(int i = 0; i < n; i++){
            string name, cate;

            cin >> name >> cate;

            data[cate]++;
        }
        int answer = 1;
        for(auto it = data.begin(); it != data.end(); it++){
            answer *= (it->second + 1);
        }
        cout << answer - 1 << '\n';
    }

    return 0;
}