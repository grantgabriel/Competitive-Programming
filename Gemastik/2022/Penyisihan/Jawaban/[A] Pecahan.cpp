// General solution : Ya pembagian doang anjir tinggal bandingkan.

#include <iostream>
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define lb "lebih besar"
#define lk "lebih kecil"
#define sm "sama"
using namespace std;

int main() {
    boost;
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    if((A / B) == (C / D)) cout << sm;
    else if((A / B) > (C / D)) cout << lb;
    else cout << lk;


    return 0;
}