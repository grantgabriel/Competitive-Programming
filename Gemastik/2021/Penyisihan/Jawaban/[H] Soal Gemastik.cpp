#include <iostream>
#define MOD 1000000007;
using namespace std;

int factorial(int n) {
    if(n == 0) return 1;
    else return n * factorial(n - 1);
}

int main() {    
    int a, b, c, d, N;
    cin >> N >> a >> b >> c >> d;

    int hasil = factorial(a - 1) * factorial(b - a - 1) * factorial(c - b - 1) * factorial(N - d);

    cout << hasil % MOD;

    return 0;
}