#include <iostream>
#include <cmath>
#include <vector>
#include <climits>
using namespace std;

typedef long long ll;
#define bug(a) cout << a
#define bugs(a) cout << a << ' '
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

int gcd(int a, int b) {
    if(b == 0) return a;

    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    boost;
    
    int N; cin >> N;
    int A[N];
    for(int i = 0; i < N; i++) {
        cin >> A[i]; 
    }

    int res = lcm(A[0], A[1]);

    for(int i = 2; i < N; i++) {
        res = lcm(res, A[i]);
    }

    cout << res;

    return 0;
}