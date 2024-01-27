#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i =0; i < n; i++){
        int stat[4];
        int equip[4];

        //캐릭터의 기본 능력치 입력
        for(int j = 0; j < 4; j++){
            cin >> stat[j];
        }

        //장비 능력치 입력
        for(int j =0; j < 4; j++){
            cin >> equip[j];
        }

        //hp, mp, att, def
        int ability = 0;
        int hp = stat[0] + equip[0]; //1보다 작을 시 1
        int mp = stat[1] + equip[1]; //1보다 작을 시 1
        int att = stat[2] + equip[2]; //0보다 작을 시 0
        int def = stat[3] + equip[3]; //음수 여부 상관x

        if(hp < 1){
            hp = 1;
        }

        if(mp < 1){
            mp = 1;
        }

        if(att < 0){
            att = 0;
        }

        //캐릭터의 능력치
        ability = hp + (5 * mp) + (2 * att) + (2 * def);

        // cout << hp << " " << 5 * mp << " " << 2 * att << " " << 2 * def << endl;
        cout << ability << endl;
    }
    return 0;
}