// General solution : 

#include <bits/stdc++.h>
#define ull unsigned long long
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

ull batuXOR(ull N) {
    if(N % 4 == 0) return N;
    if(N % 4 == 1) return 1;
    if(N % 4 == 2) return N + 1;
    if(N % 4 == 3) return 0;
}

int main() {
    boost;
    
    ull N, K, M;
    cin >> N >> K >> M;

    if(M % 2 == 0) {
        cout << "Kedua";
        return 0;
    } else {
        if(!(batuXOR(N - 1)^batuXOR(N - K - 1))) {
            cout << "Kedua";
            return 0;
        }

        cout << "Pertama";
        return 0;
    }

    
    return 0;
}