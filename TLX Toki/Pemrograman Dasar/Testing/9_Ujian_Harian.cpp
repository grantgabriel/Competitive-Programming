#include <iostream>
#include <vector>
#define ll long long
#define ull unsigned long long
#define bug(a) cout << a
#define bugs(a) cout << a << ' '
#define debug(a) cout << a << endl
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
    boost;
    
    ll int N, jumlah = 0; cin >> N;
    vector<int> V(N);

    for(auto &v : V) {
        cin >> v;
        jumlah += v;
    }

    ll count = 0;
    for(int v : V) {
        if(v * N >= jumlah) count++; // Trik menghindari pembagian, tidak perlu cari rataan
    }

    cout << count;
    
    return 0;
}