#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct map{
    int x;
    int y;
};

//비교 함수 정의
bool compare(map& a, map& b){
    //y값이 같으면 x값 비교
    if(a.y == b.y){
        return a.x < b.x;
    }
    //아니면 y값 비교
    return a.y < b.y;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;

    cin >> n;

    vector<map> arr(n);

    for(int i =0; i < n; i++){
        cin >> arr[i].x >> arr[i].y;
    }

    //arr배열의 처음부터 끝까지 정렬
    sort(arr.begin(), arr.end(), compare);

    for(int i =0; i < n; i++){
        cout << arr[i].x << " " << arr[i].y << "\n";
    }

    return 0;
}