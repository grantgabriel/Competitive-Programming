#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

int main() {
    /* Best solution */
    ll N; cin >> N;
    ll s = round(sqrt(N));
    if(s * s != N) {
        cout << "lampu mati" << endl;
    } else {
        cout << "lampu menyala" << endl;
    }

    return 0;

    /* Solusi efektif tapi kurang */
    
    // ll N; cin >> N; ll num = N;

    // int divisorCount = 1;
    // for(ll i = 2; i * i <= num; i++) {
    //     int factorCount = 0;
    //     while(num % i == 0) {
    //         factorCount+=1;
    //         num /= i;
    //     }

    //     divisorCount *= (1 + factorCount);
    // }

    // if(num > 1) {
    //     divisorCount *= 2;
    // }

    // if(divisorCount % 2 == 0) {
    //     cout << "lampu mati" << endl;
    //     return 0;
    // }

    // cout << "lampu menyala" << endl;
    // return 0;
}