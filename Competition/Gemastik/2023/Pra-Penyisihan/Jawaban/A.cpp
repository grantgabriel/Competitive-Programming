// General solution : Ya pembagian doang anjir tinggal bandingkan.

#include <iostream>
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define lb "lebih besar"
#define lk "lebih kecil"
#define sm "sama"
using namespace std;

int main() {
    boost;
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    if(A * D == B * C) cout << sm;
    else if(A * D < B * C) cout << lk;
    else cout << lb;

    return 0;
}