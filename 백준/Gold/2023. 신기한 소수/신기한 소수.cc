#include <iostream>
#include <cmath>

using namespace std;

bool Prime(int n){
    if(n < 2){
        return 0;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n% i == 0){
            return 0;
        }
    }
    return 1;
}

void findSpecialPrimes(int num, int n) {
    if(n == 0) {
        cout << num << '\n';
        return;
    }
    for(int i=1; i<=9; i+=2) { // 소수는 홀수이므로 1부터 9까지 홀수만 체크
        int nextNum = num*10 + i;
        if(Prime(nextNum)) {
            findSpecialPrimes(nextNum, n-1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);

    int n;

    cin >> n;

    findSpecialPrimes(2, n-1);
    findSpecialPrimes(3, n-1);
    findSpecialPrimes(5, n-1);
    findSpecialPrimes(7, n-1);

    return 0;
}