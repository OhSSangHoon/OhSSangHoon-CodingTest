#include <iostream>
#include <vector>

using namespace std;


//소수 판별 함수 prime
int prime(int num){
    if(num < 2) return false;
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

//n부터 m까지 소수를 구하는 함수 getPrime
vector<int> getPrime(int n, int m){
    vector<int> primes;
    for(int i = n; i <= m; i++){
        //만약 prime 함수가 true라면, 값 i primes의 맨 뒤에 추가
        if(prime(i)){
            primes.push_back(i);
        }
    }
    return primes;
}

int main(){
    int n, m;

    cin >> n >> m;

    vector<int> primes = getPrime(n, m);

    for(int i = 0; i < primes.size(); i++){
        cout << primes[i] << '\n';
    }

    return 0;
}