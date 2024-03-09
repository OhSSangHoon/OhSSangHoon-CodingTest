#include <iostream>

using namespace std;

int factorial(int num){
    if(num == 0){
        return 1;
    }

    int result = 1;

    for(int i = num; i>=1; i--){
        result *= i; //n * n-1 * n-2...
    }

    return result;
}

int main(){
    int n, k; //k는 0이상 n이하

    cin >> n >> k;
    
    // n = 5 / k = 2
    // f(5) = 120 / f(2) * f(3) = 12
    //120 / 12 = 10
    cout << factorial(n) / (factorial(k) * factorial(n-k));

    return 0;
}