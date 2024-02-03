#include <iostream>

using namespace std;


//최대 공약수
int gcd(long long a, long long b){

    //b가 0이라면 최대 공약수는 a
    if(b == 0)
        return a;

    return gcd(b, a % b); //아니라면 b와 a % b의 최대공약수를 재귀적으로 계산
}


int main(){
    long long a, b, lcm;

    cin >> a >> b;

    lcm = a * b / gcd(a, b);

    cout << lcm << endl;

    return 0;
}