#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct num{
    int arr;
};

bool compare(const num& a, const num& b){
    return a.arr < b.arr;
}

int main(){
    int n;

    cin >> n;

    vector<num> number(n);

    for(int i = 0; i < n; i++){
        cin >> number[i].arr;
    }

    //배열 정렬하기
    sort(number.begin(), number.end(), compare);

    for(int i =0; i < n; i++){
        //배열이 첫번째이거나 이전의 숫자와 중복되지 않는다면 출력
        if(i == 0 || number[i].arr != number[i - 1].arr){
            cout << number[i].arr << " ";
        }
    }
    return 0;
}