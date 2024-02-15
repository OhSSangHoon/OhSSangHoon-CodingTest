#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector<int> cals; //동적배열 cals

    for(int i = 0; i < n; i++){
        int input;

        cin >> input;

         //input값이 0이거나 cals가 비어있지않다면
        if(input == 0 && !cals.empty()){
            cals.pop_back(); //cals배열의 맨 뒤값 삭제
        }else{
            cals.push_back(input); //input값을 cals배열의 맨 뒤에 저장
        }
    }

    int sum = 0;

    //clas배열의 크기만큼 반복문 실행
    for(int i =0; i < cals.size(); i++){
        sum += cals[i];//cals배열의 누적합 sum
    }

    cout << sum;

    return 0;
}