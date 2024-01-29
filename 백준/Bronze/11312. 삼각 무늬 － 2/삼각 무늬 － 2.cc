#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    long long a,b;
    long long triangle =0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a >> b;

        a = a * a;
        b = b * b;

        triangle = a / b;

        cout << triangle << endl;
    }
    return 0;
}
