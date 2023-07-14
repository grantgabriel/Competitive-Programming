// General solution : Pindahkan pivot ke titik tidak pertukaran selanjutnya, sambil menambah nilai dari operasi.

#include <bits/stdc++.h>
#define ll long long
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main() {
    boost;
    ll N, pivot = 0;
    string A, B;
    cin >> N;
    cin >> A >> B;

    for(int i = 0; i < N; i++) {
        if(A[i] > B[i]) {
            pivot++;
            while(A[i] >= B[i]) i++;
        }
    }

    cout << pivot;

    return 0;
}